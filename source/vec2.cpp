#include <iostream>
#include "vec2.hpp"
#include "mat2.hpp"

Vec2 operator+(Vec2 const& u, Vec2 const& v) {
	Vec2 temp{ u.x + v.x,u.y + v.y };
	return temp;
};
Vec2 operator -(Vec2 const & u, Vec2 const & v) {
	Vec2 temp{ u.x - v.x, u.y - v.y };
	return temp;
};
Vec2 operator *(Vec2 const & v, float s) {
	Vec2 temp{ v.x*s, v.y*s };
	return temp;
};
Vec2 operator /(Vec2 const & v, float s) {
	if (s == 0) {
		std::cerr << "You can't devide by ZERO!";
		Vec2 err_vec{ 0.0,0.0 };
		return err_vec;
	};
	Vec2 temp{ v.x / s, v.y / s };
	return temp;
};
Vec2 operator *(float s, Vec2 const & v) {
	Vec2 temp{ v.x*s, v.y*s };
	return temp;
};
Vec2 operator*(Mat2 const& m, Vec2 const& v) {
	Vec2 temp{ m.a*v.x + m.b*v.y,m.c*v.x + m.d*v.y };
	return temp;
}
Vec2 operator*(Vec2 const & v, Mat2 const & m) {
	Vec2 temp{ m.a*v.x + m.b*v.y,m.c*v.x + m.d*v.y };
	return temp;
};

Vec2& Vec2::operator+=(Vec2 const& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

Vec2& Vec2::operator-=(Vec2 const & v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

Vec2 & Vec2::operator*=(float s)
{
	x = x*s;
	y = y*s;
	return *this;
}

Vec2 & Vec2::operator/=(float s)
{
	if (s == 0) {
		std::cerr << "You can't devide by ZERO!" << "\n";
		return *this;
	}
	x = x/s;
	y = y/s;
	return *this;
}

void Vec2::reset()
{
	x = 0.0;
	y = 0.0;
}

void Vec2::copy_mouse(double x_, double y_) {
	x = x_;
	 y = y_;
}


