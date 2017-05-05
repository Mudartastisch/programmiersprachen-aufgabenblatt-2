#ifndef MAT2_HPP
#define MAT2_HPP
struct Mat2{
	float m_0;
	float m_1;
	float n_0;
	float n_1;
	// Looks like m_0 m_1
	//			  n_0 n_1
	Mat2() {
		m_0 = 1.0f;
		m_1 = 0.0f;
		n_0 = 0.0f;
		n_1 = 1.0f;
	};
	Mat2(float a, float b, float c, float d) {
		m_0 = a; 
		m_1 = b;
		n_0 = c;
		n_1 = d;
	};
	Mat2 & operator *=( Mat2 const & m);

};
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );
#endif // MAT2_HPP