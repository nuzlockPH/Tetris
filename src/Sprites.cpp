#include "Sprites.hpp"

flatButton flatButton01Small = fB01Small;
flatButton flatButton02Small = fB02Small;
flatButton flatButton03Small = fB03Small;
flatButton flatButton01Medium = fB01Medium;
flatButton flatButton02Medium = fB02Medium;
flatButton flatButton03Medium = fB03Medium;
flatButton flatButton01Large = fB01Large;
flatButton flatButton02Large = fB02Large;
flatButton flatButton03Large = fB03Large;

Sprites::Sprites() {}

Sprites::~Sprites() {}

Sprites &Sprites::getInstance()
{
	static Sprites instance;
	return instance;
}

void Sprites::loadSprites()
{
	int y = SPRITE_HEIGHT;
	for (int i = 0; i < SPRITE_FLATBUTTON_ROW; i++)
	{
		SDL_Rect rect = {0, y, SPRITE_WIDTH, SPRITE_HEIGHT};
		btnMap.push_back(rect);
		y += SPRITE_HEIGHT;
	}
}