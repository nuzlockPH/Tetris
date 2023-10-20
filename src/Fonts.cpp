#include "Fonts.hpp"

Fonts::Fonts()
{
	fontSmall = loadFont(FONT_PATH, SMALL);
	fontMedium = loadFont(FONT_PATH, MEDIUM);
	fontLarge = loadFont(FONT_PATH, LARGE);
}

Fonts::~Fonts() {}

Fonts &Fonts::getInstance()
{
	static Fonts instance;
	return instance;
}

TTF_Font *Fonts::loadFont(std::string path, int fontSize)
{
	TTF_Font *font = TTF_OpenFont(path.c_str(), fontSize);

	if (!font)
		SDL_Log("failed to load font: %s", TTF_GetError());
	return font;
}