#include "vec2.hpp"
#include "color.hpp"
class Rectangle{
public:
	Rectangle() {
		min_ = Vec2{ 0.0,0.0 };
		max_ = Vec2{ 1.0,1.0 };
		lower_right = Vec2{ min_.x,max_.y };
		upper_left = Vec2{ max_.x,min_.y };
		color = Color{0.0};
	}
	Rectangle(Vec2 const& lower_left, Vec2 const& upper_right, Color color_) {
		min_ = lower_left;
		max_ = upper_right;
		lower_right = Vec2{ lower_left.x,upper_right.y };
		upper_left = Vec2{ upper_right.x,lower_left.y };
		color = color_;
	}
	Vec2 getMin_() {
		return min_;
	}
	Vec2 getMax_() {
		return max_;
	}
	Vec2 getLowerRight() {
		return lower_right;
	}
	Vec2 getUpperLeft() {
		return upper_left;
	}
	float circumference() {
		return (2 * (lower_right.x - min_.x) + 2 * (upper_left.y - min_.y));
	}

private:
	Vec2 min_;
	Vec2 max_;
	Vec2 lower_right;
	Vec2 upper_left;
	Color color;
};