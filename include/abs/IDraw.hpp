#ifndef IDRAW_H
#define IDRAW_H
#include <SDL2/SDL.h>
class IDraw{
	public:
	virtual void draw(SDL_Renderer*);
};
#endif