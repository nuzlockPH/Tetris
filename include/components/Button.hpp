#ifndef BUTTON_H
#define BUTTON_H
#include <SDL2/SDL.h>
#include <string>
#include "abs/IDraw.hpp"

class Button:public IDraw{
	public:
	Button();
	Button(std::string,SDL_Texture*,SDL_Texture*,SDL_Rect);
	~Button();
	std::string label;
	SDL_Texture* textureImg;
	SDL_Texture* textureText;
	SDL_Rect rect;
	void draw(SDL_Renderer*)override;
};
 #endif 