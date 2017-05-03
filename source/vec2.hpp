#ifndef VEC2_HPP
#define VEC2_HPP
#include <iostream>
// Vec2 class definition

struct Vec2
{
	float x;
	float y;	
	Vec2() {
		x = 0.0f;
		y = 0.0f;
	};
	Vec2(float a, float b) {
		x = a;
		y = b;
	};

	Vec2& operator +=(Vec2 const& v);
	Vec2& operator -=(Vec2 const& v);
	Vec2& operator *=(float s);
	Vec2 & operator /=(float s);
};
//Destruktor/Destructor ist eine Memberfunktion die verwendet wird um den, von dem Object belegten
//Speicherplatz am Ende der Lebenszeit direkt wieder freizugeben
//Ich sehe keinen Sinn hier einen Solchen einzufügen, da mein Programm sehr klein ist
#endif // VEC2_HPP