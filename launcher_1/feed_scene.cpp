#include"feed_scene.hpp"

feed_scene::feed_scene(int state_num, int next_num, std::string path) :scene(state_num, next_num, path) {
	gra = LoadGraph(path.c_str());
}

feed_scene::~feed_scene() {
	Finalize();
}

void feed_scene::Initialize(int state_num, int next_num,std::string path) {
	alive = true;
	count = 0;
	this_state = state_num;
	next_state = next_num;

	gra = LoadGraph(path.c_str());
}

void feed_scene::Finalize() {
	DeleteGraph(gra);
}

void feed_scene::update() {
	if (count >= 0)SetDrawBlendMode(DX_BLENDMODE_ALPHA, count*3);
	if (count > 128)SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
	if(count > 192)SetDrawBlendMode(DX_BLENDMODE_ALPHA, 256-((count-192)*4));

	if(count > 256)alive = false;

	count++;
}

void feed_scene::draw() {
	//DrawFormatString(0,0,0xFFFFFFF,"%d",count);
	//if(alive)DrawFormatString(0, 16, 0xFFFFFFF, "%d", this_state);
	DrawGraph(0,0,gra,TRUE);
}