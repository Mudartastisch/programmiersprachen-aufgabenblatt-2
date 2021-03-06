#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "color.hpp"
#include "vec2.hpp"
class Circle{
public:
	Circle();
	Circle(Vec2 center_point, float radius_);
	Circle(Vec2 center_point, float radius_, Color color_);
	Vec2 const & getCenter()const;
	float const& getRadius()const;
	float const& circumference()const;
	Color const& getColor() const;
	bool const& is_inside(Vec2 test) const;
	bool const& operator<(Circle circ2)const;
	bool const& operator>(Circle circ2)const;
	bool const& operator==(Circle circ2)const;
private:
	Vec2 center;
	float radius;
	Color color;
};
#endif // CIRCLE_HPP