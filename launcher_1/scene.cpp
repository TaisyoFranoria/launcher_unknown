#include"scene.hpp"

scene::scene(int state_num,int next_num) {
	Initialize(state_num,next_num);
}

scene::scene(int state_num, int next_num,std::string path) {
	Initialize(state_num, next_num);
}

scene::~scene() {
	Finalize();
}

void scene::Initialize(int state_num, int next_num) {
	alive = true;
	count = 0;
	this_state = state_num;
	next_state = next_num;
}


void scene::Finalize() {
	alive = false;
}

void scene::update() {
	count++;
}

void scene::draw() {

}

void scene::all() {
	update();
	draw();
}

bool scene::get_alive() { return alive; }

int scene::get_count() {return count;}

int scene::get_state() { 
	if (alive)return this_state;
	else return next_state;
}

