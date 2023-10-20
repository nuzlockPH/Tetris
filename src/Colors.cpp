#include "Colors.hpp"

Colors::Colors() {}

Colors::~Colors() {}

Colors &Colors::getInstance()
{
	static Colors instance;
	return instance;
}

void Colors::loadColors()
{
	textColor01 = {246, 203, 207};
	bgColor01 = {16, 1, 0};
}