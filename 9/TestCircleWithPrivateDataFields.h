#include <iostream>
#include "CircleWithPrivateDataFields.h"
using namespace std;

int main()
{
	Circle circle1;
	Circle circle2(5.0);

	cout << "The area of the circle of radius "
		<< circle1.getRadius() << " is " << circle1.getArea() << endl;
	cout << "The area of the circle of radius "
		<< circle2.getRadius() << " is " << circle2.getArea() << endl;

	// 원의 반지름 변경
	circle2.setRadius(100);
	cout << "The area of the circle of radius "
		<< circle2.getRadius() << " is " << circle2.getArea() << endl;

	return 0;
}