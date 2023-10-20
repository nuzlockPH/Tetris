
#ifndef SCREEN_H 
#define SCREEN_H
#include <SDL2/SDL.h>
class IScreen{
	public:
	virtual void draw();
	virtual bool contains();
	void renderText();
	void renderButton();
	void renderImage();
};
#endif