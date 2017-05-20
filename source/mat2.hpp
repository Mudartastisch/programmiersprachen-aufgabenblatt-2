#ifndef MAT2_HPP
#define MAT2_HPP
struct Mat2{
	float a;
	float b;
	float c;
	float d;
	// Looks like a b
	//			  c d
	Mat2() {
		a = 1.0f;
		b = 0.0f;
		c = 0.0f;
		d = 1.0f;
	};
	Mat2(float top_left, float top_right, float lower_left, float lower_right) {
		a = top_left;
		b = top_right;
		c = lower_left;
		d = lower_right;
	};

	Mat2& operator *=( Mat2 const & m);

	

};
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );
#endif // MAT2_HPP