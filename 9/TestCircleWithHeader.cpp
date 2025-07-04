#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle circle1; // Circle Ŭ������ ��ü circle1 ������. �μ� ���� ������ ȣ��
	Circle circle2(5.0); // Circle Ŭ������ ��ü circle2 ������. �μ� �ִ� ������ ȣ��

	cout << "The area of the circle of radius "
		<< circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The area of the circle of radius "
		<< circle2.radius << " is " << circle2.getArea() << endl;

	// ���� ������ ����
	circle2.radius = 100;
	cout << "The area of the circle of radius "
		<< circle2.radius << " is " << circle2.getArea() << endl;

	return 0;
}