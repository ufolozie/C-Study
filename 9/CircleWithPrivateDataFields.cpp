#include "CircleWithPrivateDataFields.h"

// 기본 circle 객체 생성
Circle::Circle()
{
	radius = 1;
}

// circle 객체 생성
Circle::Circle(double newRadius)
{
	radius = newRadius;
}

// 원의 면적 반환
double Circle::getArea()
{
	return radius * radius * 3.14159;
}

// 원의 반지름 반환
double Circle::getRadius()
{
	return radius;
}

// 새로운 반지름 설정
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}