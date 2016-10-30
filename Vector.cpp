#include "Vector.h"



Vector::Vector()
{
}

Vector::Vector( Vector&& a):x(move(a.x)),y(move(a.y)),z(move(a.z))
{
}

Vector::Vector(float mx, float my, float mz):x(mx),y(my),z(mz)
{
}

Vector & Vector::operator=(const Vector & a)
{
	x = a.x; 
	y = a.y;
	z = a.z;
	return(*this);
}

Vector & Vector::operator+(const Vector & a)const
{
	
	return Vector(x + a.x, y + a.y, z + a.z);
}

Vector & Vector::operator-(const Vector & a) const
{
	return Vector(x - a.x, y - a.y, z - a.z);
}

Vector & Vector::operator*(float a) const
{
	return Vector(x*a,y*a,z*a);
}

Vector & Vector::operator*(const Vector & a) const
{
	return Vector(x*a.x, y*a.y, z*a.z);
}

inline float Vector::Magnitude()
{
	
	return sqrt(x*x+y*y + z*z);
}


void Vector::show()
{
	cout << x << " " << y << " " << z;
}

void Vector::showMag()
{
	cout << Magnitude();
}


Vector::~Vector()
{
}

 bool operator<(const Vector & lhs, const Vector & rhs)
{
	return (lhs < rhs);
}

bool operator>(const Vector & lhs, const Vector & rhs)
{
	return lhs > rhs;
}
