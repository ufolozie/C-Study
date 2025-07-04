#include <iostream>
// CircleWithPrivateDataFields.h는 리스트 9.9에 정의되어 있다.
#include "CircleWithPrivateDataFields.h"
using namespace std;

void printCircle(Circle c)
{
	cout << "The area of the circle of "
		<< c.getRadius() << " is " << c.getArea() << endl;
}

int main()
{
	Circle myCircle(5.0);
	printCircle(myCircle);

	return 0;
}