#include "SdlInit.hpp"
#include "Fonts.hpp"
#include "Images.hpp"
#include "abs/Screen.hpp"
#include "StartScreen.hpp"
#define WIDTH 360*2
#define HEIGHT 680*2
class Start{
	SdlInit _sdlInit;
	SDL_Window* _window;
	SDL_Renderer* _renderer;
	StartScreen* _startScreen;
	IScreen* _currentScreen;
	void _init();
	void _createWindow();
	public:
	Start();
	void start();
	void clear();
};