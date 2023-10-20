#include <SDL2/SDL_ttf.h>
#include "StartScreen.hpp"
#include "Fonts.hpp"
#include "Images.hpp"

StartScreen::StartScreen() : _renderer(NULL) {}

StartScreen::StartScreen(SDL_Renderer *renderer) : _renderer(renderer)
{
	Fonts &font = Fonts::getInstance();
	Images &images = Images::getInstance();

	SDL_Color color = {255, 100, 255};

	SDL_Surface *surface = TTF_RenderText_Solid(font.fontLarge, "Sample", color);

	SDL_Texture *texture = SDL_CreateTextureFromSurface(_renderer, surface);
	SDL_Texture *flatbutton01 = images.flatButton01;

	SDL_Rect textRect = {100, 100, surface->w, surface->h};
	SDL_Rect imageRectSrc = {0, 32 * 8, 96, 32};
	SDL_Rect imageRectDst = {100, 100, 96 * 2, 32 * 2};
	SDL_FreeSurface(surface);

	SDL_RenderCopy(_renderer, flatbutton01, &imageRectSrc, &imageRectDst);

	SDL_QueryTexture(texture, nullptr, nullptr, &textRect.w, &textRect.h);
	SDL_RenderCopy(_renderer, texture, nullptr, &textRect);

	SDL_DestroyTexture(texture);
}

bool StartScreen::contains() {}

void StartScreen::draw()
{
	SDL_RenderPresent(_renderer);
}