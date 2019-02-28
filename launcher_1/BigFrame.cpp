#include"BigFrame.hpp"

BigFrame::BigFrame() {
	alive = true;
	state = 0;
	sc.push_back(new feed_scene(0,1,"img/state_0.png"));
	sc.push_back(new feed_scene(1,999,"img/state_1.png"));
}

BigFrame::~BigFrame() {

}

void BigFrame::update() {
	sc[state]->all();

	state = sc[state]->get_state();

	if (state == 999)alive = false;
}
bool BigFrame::get_alive() { return alive; }

int BigFrame::get_state() { return state; }

