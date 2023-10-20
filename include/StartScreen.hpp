#include <SDL2/SDL.h>
#include "abs/Screen.hpp"

class StartScreen : public IScreen
{
	SDL_Renderer *_renderer;
  public:
	StartScreen();
	StartScreen(SDL_Renderer *);
	void draw() override;
	bool contains() override;
};