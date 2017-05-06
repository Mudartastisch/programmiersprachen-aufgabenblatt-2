#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
#include "rectangle.hpp"

Rectangle::Rectangle() :min_{ 0.0,0.0 }, max_{ 0.0,0.0 }, lower_right{ min_.x,max_.y } , 
						upper_left{ max_.x,min_.y }, color { 0.0 } {}
Rectangle::Rectangle(Vec2 const& lower_left, Vec2 const& upper_right, Color color_) {
		min_ = lower_left;
		max_ = upper_right;
		lower_right = Vec2{ lower_left.x,upper_right.y };
		upper_left = Vec2{ upper_right.x,lower_left.y };
		color = color_;
	}
Vec2 const&	Rectangle::getMin_() {
		return min_; 
	}
Vec2 const&	Rectangle::getMax_() {
		return max_;
	}
 Vec2  const&	Rectangle::getLowerRight() {
		return lower_right;
	}
Vec2 const&	Rectangle::getUpperLeft() {
		return upper_left;
	}
float const& Rectangle::circumference() const{
		return (2 * (lower_right.x - min_.x) + 2 * (upper_left.y - min_.y));
	}
void Rectangle::draw(Window const & canvas) const {
		canvas.draw_line(min_.x, min_.y, lower_right.x, lower_right.y, 0.0, 0.0, 0.0);
		canvas.draw_line(min_.x, min_.y, upper_left.x, upper_left.y, 0.0, 0.0, 0.0);
		canvas.draw_line(max_.x, max_.y, lower_right.x, lower_right.y, 0.0, 0.0, 0.0);
		canvas.draw_line(max_.x, max_.y, upper_left.x, upper_left.y, 0.0, 0.0, 0.0);
	}

