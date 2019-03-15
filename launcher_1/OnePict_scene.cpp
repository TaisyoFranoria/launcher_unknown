#include"OnePict_scene.hpp"

OnePict_scene::OnePict_scene(int state_num, int next_num, std::string path) :scene(state_num,next_num,path) {
	gra = LoadGraph(path.c_str());
}

OnePict_scene::~OnePict_scene() {
	Finalize();
}

void OnePict_scene::Initialize(int state_num, int next_num, std::string path) {
	alive = true;
	count = 0;
	this_state = state_num;
	next_state = next_num;

	gra = LoadGraph(path.c_str());
}

void OnePict_scene::Finalize() {
	DeleteGraph(gra);
}

void OnePict_scene::update() {
	if(count==5)SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
	if (CheckHitKey(KEY_INPUT_0))alive = false;
	count++;
}

void OnePict_scene::draw() {
	DrawFormatString(0,0,0xFFFFFFF,"%d",count);
	DrawGraph(0,0,gra,TRUE);
}
