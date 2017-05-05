#define _USE_MATH_DEFINES
#include <math.h>
#include "vec2.hpp"
#include "color.hpp"
class Circle{
public:
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
	Circle(float const& rad,Vec2 const& center_point, Color color_) {
		center = center_point;
		radius = rad;
		color = color_;
	};
	Vec2 getCenter() {
		return center;
	}
	float getRadius() {
		return radius;
	}
	float circumference() {
		return M_PI*(radius * 2);
	}
private:
	Vec2 center;
	float radius;
	Color color;
};