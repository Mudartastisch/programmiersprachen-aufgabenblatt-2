#define _USE_MATH_DEFINES
#include <math.h>
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
#include "circle.hpp"

	
Circle::Circle():center{ 0.0, 0.0 },radius{ 1.0 },color{ 1,1,1 }
{}
Circle::Circle(Vec2 center_point, float radius_, Color color_) {
	center = center_point;
	radius = radius_;
	color = color_;
}

void Circle::draw(Window const & canvas) const{
	
	canvas.draw_point(getCenter().x, getCenter().y, 0.0f, 0.0f, 0.0f);
	canvas.draw_line(center.x - radius / 2, center.y - radius, center.x + radius / 2, center.y - radius, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x + radius / 2, center.y - radius, center.x + radius, center.y - radius / 2, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x + radius, center.y - radius / 2, center.x + radius, center.y + radius / 2, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x + radius, center.y + radius / 2, center.x + radius / 2, center.y + radius, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x + radius / 2, center.y + radius, center.x - radius / 2, center.y + radius, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x - radius / 2, center.y + radius, center.x - radius, center.y + radius / 2, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x - radius, center.y + radius / 2, center.x - radius, center.y - radius / 2, 0.0, 0.0, 0.0);
	canvas.draw_line(center.x - radius, center.y - radius / 2, center.x - radius / 2, center.y - radius, 0.0, 0.0, 0.0);
	
	//canvas.draw_line(10.0, 10.0, 11.0, 11.0, 0.0, 0.0, 0.0);
}
Vec2 const& Circle::getCenter() const{
	return center;
}
float const& Circle::getRadius()const {
	return radius;
}
float const& Circle::circumference() const{
		float circ = M_PI*(radius * 2);
		return circ;
	}
Color const& Circle::getColor() const{
	return color;
}
