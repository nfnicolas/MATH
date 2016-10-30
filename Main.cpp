#include<iostream>
#include"Vector.h"
using namespace std;
int main(int argc, char**argv)
{
	Vector ob1(3, 4, 5), ob2(1, 2, 3), ob3;
	cout << "You have vector1      "; ob1.show();
	cout << "\n          vector2   "; ob2.show();
	ob3 = ob2 + ob1;
	cout << "\n\nAdd\n";
	ob3.show();

	ob3 = ob1 * 3;
	cout << "\n\nMultiplication by scalar\n";
	ob3.show();

	ob3 = ob1*ob2;
	cout << "\n\nMultiplication\n";
	ob3.show();

	cout << "\n\nMagnitude vector1\n";
	ob1.Magnitude();
	ob1.showMag();
	cout << "\n\nMagnitude vector2\n";
	ob2.Magnitude();
	ob2.showMag();

	/*cout <<"\nVector1 is less than vector2 : "<<
		(ob1.Magnitude() < ob2.Magnitude()) ? ob1.showMag() : ob2.showMag();
	cout <<"\nVector2 is more than vector1\n"<<
		(ob1.Magnitude() > ob2.Magnitude()) ? ob1.Magnitude() : ob2.Magnitude();*/
	
	if (ob1.Magnitude() > ob2.Magnitude())
	{
		cout << "\n\nVector1 is less than vector2 : ";
		ob1.showMag();
	}
	else
	{	cout << "\n\nVector2 is more than vector1\n ";
	ob2.showMag();
}
	return 0;
}