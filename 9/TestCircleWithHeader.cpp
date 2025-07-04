#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle circle1; // Circle 클래스의 객체 circle1 생성함. 인수 없는 생성자 호출
	Circle circle2(5.0); // Circle 클래스의 객체 circle2 생성함. 인수 있는 생성자 호출

	cout << "The area of the circle of radius "
		<< circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The area of the circle of radius "
		<< circle2.radius << " is " << circle2.getArea() << endl;

	// 원의 반지름 변경
	circle2.radius = 100;
	cout << "The area of the circle of radius "
		<< circle2.radius << " is " << circle2.getArea() << endl;

	return 0;
}