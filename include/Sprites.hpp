#ifndef SPRITES_H
#define SPRITES_H
#define SPRITE_WIDTH 48
#define SPRITE_HEIGHT 48
#define SPRITE_FLATBUTTON_COLUMN 4
#define SPRITE_FLATBUTTON_ROW 9
#include <vector>
#include <SDL2/SDL.h>

enum flatButton{
		fB01Small,
		fB02Small,
		fB03Small,
		fB01Medium,
		fB02Medium,
		fB03Medium,
		fB01Large,
		fB02Large,
		fB03Large
};

extern flatButton flatButton01Small;
extern flatButton flatButton02Small;
extern flatButton flatButton03Small;
extern flatButton flatButton01Medium;
extern flatButton flatButton02Medium;
extern flatButton flatButton03Medium;
extern flatButton flatButton01Large;
extern flatButton flatButton02Large;
extern flatButton flatButton03Large;

class Sprites{
	Sprites();
	~Sprites();
	public:
	static Sprites& getInstance();
	void loadSprites();
	std::vector<SDL_Rect> btnMap;
};
 #endif 