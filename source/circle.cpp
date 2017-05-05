#define _USE_MATH_DEFINES
#include <math.h>
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
class Circle{
public:
	
	Vec2 getCenter() {
		return center;
	}
	float getRadius() {
		return radius;
	}
	float circumference() {
		float circ = M_PI*(radius * 2);
		return circ;
	}
	Circle& Circle::draw(Window canvas) {
		canvas.draw_point(center.x, center.y, color.red, color.green, color.blue);
		canvas.draw_line(center.x - radius / 2, center.y - radius, center.x + radius / 2, center.y - radius, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x + radius / 2, center.y - radius, center.x + radius, center.y - radius / 2, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x + radius, center.y - radius / 2, center.x + radius, center.y + radius / 2, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x + radius, center.y + radius / 2, center.x + radius / 2, center.y + radius, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x + radius / 2, center.y + radius, center.x - radius / 2, center.y + radius, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x - radius / 2, center.y + radius, center.x - radius, center.y + radius / 2, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x - radius, center.y + radius / 2, center.x - radius, center.y - radius / 2, 0.0, 0.0, 0.0);
		canvas.draw_line(center.x - radius, center.y - radius / 2, center.x - radius / 2, center.y - radius, 0.0, 0.0, 0.0);

		
	}
private:
	Vec2 center;
	float radius;
	Color color;
};