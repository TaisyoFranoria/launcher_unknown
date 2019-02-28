#pragma once
#include"scene.hpp"


class feed_scene : public scene {
public:
	feed_scene(int state_num, int next_num, std::string path);
	~feed_scene();
private:
	void Initialize(int state_num,int next_num,std::string path);
	void Finalize();
	void update();
	void draw();
	int gra;
};