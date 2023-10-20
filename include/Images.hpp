#ifndef IMAGES_H
#define IMAGES_H 
#include <SDL2/SDL_image.h>
#include <string>
#define FLATBUTTON01 "resources/Spritesheets/Spritesheet_UI_Flat_Button_01.png"
#define FLATBUTTON02 "resources/Spritesheets/Spritesheet_UI_Flat_Button_02.png"
 
class Images{
	Images();
	~Images();
	public:
	static Images& getInstance();
	SDL_Texture* flatButton01;
	SDL_Texture* flatButton02;
	SDL_Texture* loadImgTexture(SDL_Renderer*,std::string);
	void loadSpriteSheets(SDL_Renderer*);
};
#endif