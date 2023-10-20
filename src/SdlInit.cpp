#include "SdlInit.hpp"

SdlInit::SdlInit() { init(); }

bool SdlInit::init()
{
	int ttfInit = TTF_Init();
	int imgInit=IMG_Init(0);
	int sdlInit = SDL_Init(SDL_INIT_EVERYTHING);
	
	if (sdlInit != 0)
	{
		SDL_Log("failed to load SDL2: %s", SDL_GetError());
		return false;
	}
	
	if (ttfInit != 0)
	{
		SDL_Log("failed to load TTF: %s", TTF_GetError());
		return false;
	}
	
	if (imgInit != 0)
	{
		SDL_Log("failed to load TTF: %s", IMG_GetError());
		return false;
	}
	return true;
}