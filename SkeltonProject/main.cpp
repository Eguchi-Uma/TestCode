#include <DxLib.h>

// WinMainä÷êî
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	DxLib::SetWindowText(L"2016007_ç]å˚óD·¡");
	DxLib::ChangeWindowMode(true);
	DxLib::SetGraphMode(640, 480, 32);

	if (DxLib_Init())
	{
		return -1;
	}

	DxLib::SetDrawScreen(DX_SCREEN_BACK);

	while (DxLib::ProcessMessage() == 0)
	{
		DxLib::ScreenFlip();
	}

	return 0;
}