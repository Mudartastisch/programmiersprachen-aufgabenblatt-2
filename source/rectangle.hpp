#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"
class Rectangle{
public:
	Rectangle();
	Rectangle(Vec2 const& lower_left, Vec2 const& upper_right, Color color_);
	Vec2 const& getMin_();
	Vec2 const& getMax_();
	Vec2 const& getLowerRight();
	Vec2 const& getUpperLeft();
	float const& circumference()const;
	void draw(Window const& window) const;
	void draw(Window const& window, Color color_) const;
	bool const & Rectangle::is_inside(Vec2 test) const;
private:
	Vec2 min_;
	Vec2 max_;
	Vec2 lower_right;
	Vec2 upper_left;
	Color color;
};
#endif // RECTANGLE_HPP