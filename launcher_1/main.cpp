#include<iostream>
#include<Dxlib.h>
#include"BigFrame.hpp"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetMainWindowText("‹•–³");
	SetGraphMode(640, 480, 32);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	BigFrame* main_ = new BigFrame();


	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		main_->update();
		if (!main_->get_alive())break;
	}

	delete main_;

	return 0;
}