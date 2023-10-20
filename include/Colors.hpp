#ifndef COLORS_H
#define COLORS_H
#include <SDL2/SDL.h>
class Colors{
	Colors();
	~Colors();
	public:
		static Colors& getInstance();
		void loadColors();
		SDL_Color textColor01;
		SDL_Color bgColor01;
};
#endif