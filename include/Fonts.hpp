#include <SDL2/SDL_ttf.h>
#include <string>
#define FONT_PATH "resources/Debrosee-ALPnL.ttf"
#define SMALL 26
#define MEDIUM 30
#define LARGE 36
 

class Fonts{
	Fonts();
	~Fonts();
	public:
	static Fonts& getInstance();
	TTF_Font* fontSmall;
	TTF_Font* fontMedium;
	TTF_Font* fontLarge;
	TTF_Font* loadFont(std::string,int);
};