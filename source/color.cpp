#include "color.hpp"

Color::Color() {
	red = 0.0;
	green = 0.0;
	blue = 0.0;
}
Color::Color(float c) {
	if (c > 1.0 || c < 0.0) {
		std::cerr << "The color must be defined between 0.0 and 1.0, default was set to black" << "\n";
		red = 0.0;
		green = 0.0;
		blue = 0.0;
	}
	else {
		red = c;
		green = c;
		blue = c;
	}
}
Color::Color(float r, float g, float b) {
	if (r > 1.0 || r < 0.0 || g > 1.0 || g < 0.0 || b > 1.0 || b < 0.0) {
		std::cerr << "The color must be defined between 0.0 and 1.0, default was set to black" << "\n";
		red = 0.0;
		green = 0.0;
		blue = 0.0;
	}
	else {
		red = r;
		green = g;
		blue = b;
	}
}
