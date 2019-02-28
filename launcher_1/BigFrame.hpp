#pragma once
#include<iostream>
#include<Dxlib.h>
#include<vector>
#include"feed_scene.hpp"

class BigFrame {
public:
	BigFrame();
	~BigFrame();
	void update();
	bool get_alive();
	int get_state();
private:
	bool alive;
	int state;
	std::vector<scene*> sc;
};