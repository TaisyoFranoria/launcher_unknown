#pragma once
#include"scene.hpp"

class OnePict_scene :public scene {
public:
	OnePict_scene(int state_num, int next_num, std::string path);
	~OnePict_scene();
private:
	void Initialize(int state_num, int next_num, std::string path);
	void Finalize();
	void update();
	void draw();

	int gra;
};