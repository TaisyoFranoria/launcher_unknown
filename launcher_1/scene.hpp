#pragma once
#include<Dxlib.h>
#include<iostream>
#include<string>

class scene {
public:
	scene(int state_num, int next_num);
	scene(int state_num, int next_num,std::string path);
	~scene();
	void all();
	bool get_alive();
	int get_count();
	int get_state();
protected:
	virtual void Initialize(int state_num, int next_num);
	virtual void Finalize();
	virtual void update();
	virtual void draw();

	bool alive;
	int count;
	int this_state;
	int next_state;
};
