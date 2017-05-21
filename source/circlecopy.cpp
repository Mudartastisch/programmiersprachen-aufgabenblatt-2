#define _USE_MATH_DEFINES
#include <math.h>
#include "vec2.hpp"
#include "color.hpp"
#include "circlecopy.hpp"

	
Circle::Circle():center{ 0.0, 0.0 },radius{ 1.0 },color{ 1,1,1 }
{}
Circle::Circle(Vec2 center_point, float radius_) {
	center = center_point;
	radius = radius_;
}
Circle::Circle(Vec2 center_point, float radius_, Color color_) {
	center = center_point;
	radius = radius_;
	color = color_;
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
bool const & Circle::is_inside(Vec2 test) const
{
	
	if (pow(test.x-center.x,2)+pow(test.y-center.y,2)<=pow(radius,2)) {
		return true;
	}
	else {
		return false;
	}
}

bool const & Circle::operator<(Circle circ2)const
{
	return radius < circ2.radius;
}

bool const & Circle::operator>(Circle circ2)const
{
	return radius > circ2.radius;
}

bool const & Circle::operator==(Circle circ2)const
{
	return radius == circ2.radius;
}


