#include "components/Button.hpp"

Button::Button(){}

Button::Button(std::string label_,SDL_Texture* textureImg_,SDL_Texture* textureText_,SDL_Rect rect_):label(label_),textureImg(textureImg_),textureText(textureText_),rect(rect_){
	
}

Button::~Button(){}

void Button::draw(SDL_Renderer* renderer){
	
}