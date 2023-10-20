#include "Start.hpp"
#include "Colors.hpp"

Start::Start()
{
	_init();
}

void Start::_init()
{
	Fonts &fonts = Fonts::getInstance();
	Images& images=Images::getInstance();
	Colors& colors=Colors::getInstance();
	colors.loadColors();

	_createWindow();
	_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	images.loadSpriteSheets(_renderer);

	_startScreen = new StartScreen(_renderer);
}

void Start::_createWindow()
{
	_window = SDL_CreateWindow("TETRIS", 0, 0, WIDTH, HEIGHT, 0);
	if (!_window)
	{
		SDL_Log("failed to create window: %s", SDL_GetError());
		SDL_Quit();
	}
}

void Start::start()
{
	_currentScreen = _startScreen;
	//clear();
	_currentScreen->draw();

	SDL_Event event;
	bool running = true;
	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				running = false;
		}
	}
}

void Start::clear()
{
	SDL_RenderClear(_renderer);
}