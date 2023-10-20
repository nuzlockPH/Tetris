#include "Images.hpp"

Images::Images()
{
}

Images &Images::getInstance()
{
	static Images instance;
	return instance;
}

SDL_Texture *Images::loadImgTexture(SDL_Renderer *renderer, std::string path)
{
	SDL_Texture *texture = IMG_LoadTexture(renderer, path.c_str());

	if (!texture)
		SDL_Log("failed to load image: %s", IMG_GetError());

	return texture;
}

void Images::loadSpriteSheets(SDL_Renderer *renderer)
{

	flatButton01 = loadImgTexture(renderer, FLATBUTTON01);

	flatButton02 = loadImgTexture(renderer, FLATBUTTON02);
}

Images::~Images()
{
	SDL_DestroyTexture(flatButton01);
	SDL_DestroyTexture(flatButton02);
}