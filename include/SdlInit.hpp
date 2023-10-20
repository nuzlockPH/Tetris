#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_audio.h>
#include<SDL2/SDL_ttf.h>

class SdlInit{
	public:
		SdlInit();
		bool init();
};