#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "color.hpp"
#include "vec2.hpp"
struct Circle{
	Vec2 center;
	float radius;
	Color color;
	Circle() {
		center = Vec2{ 0.0,0.0 };
		radius = 1.0;
		color = Color{ 0.0 };
	};
	Circle(Vec2 const& center_point, float rad, Color color_) {
		center = center_point;
		radius = rad;
		color = color_;
	};
	Circle(float const& rad, Vec2 const& center_point, Color color_) {
		center = center_point;
		radius = rad;
		color = color_;
	};
	Circle& draw(Window canvas);
};
#endif // CIRCLE_HPP