#include <iostream>
#include "vec2.hpp"
#include "mat2.hpp"

Mat2& Mat2::operator*=(Mat2 const & m) {
	float temp_a = a*m.a + b*m.c;
	float temp_b = a*m.b + b*m.d;
	float temp_c = c*m.a + d*m.c;
	float temp_d = c*m.b + d*m.d;
	a = temp_a;
	b = temp_b;
	c = temp_c;
	d = temp_d;	
	return *this;
}
Mat2 operator*(Mat2 const& m1, Mat2 const& m2)
{
	Mat2 temp{m1.a*m2.a+m1.b*m2.c,m1.a*m2.b + m1.b*m2.d,m1.c*m2.a + m1.d*m2.c,m1.c*m2.b + m1.d*m2.d};
	
	return temp;
}

 
;