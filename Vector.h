#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class Vector
{
	float x, y, z;
public:
	Vector();
	Vector( Vector&&a);                    //ctor move according to c++11
	Vector(float mx, float my, float mz);
	Vector&operator=(const Vector&a);
	Vector&operator+(const Vector&a)const;
	Vector&operator-(const Vector&a)const;
	Vector&operator*(float a)const;
	Vector&operator*(const Vector&a)const;
	inline float Magnitude();
	
	void show();
	void showMag();
	~Vector();
};
 bool operator<(const Vector&lhs,const Vector&rhs);
 bool operator>(const Vector&lhs, const Vector&rhs);
