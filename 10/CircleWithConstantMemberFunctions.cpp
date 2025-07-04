#include "CircleWithConstantMemberFunctions.h"

int Circle::numberOfObjects = 0;

// circle 객체 생성
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

// circle 객체 생성
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

// 원의 면적 반환
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

// 원의 반지름 설정
double Circle::getRadius() const
{
	return radius;
}

// 새로운 반지름 설정
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

// circle 객체의 수 반환
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}