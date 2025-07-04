#include "CircleWithStaticDataFields.h"

int Circle::numberOfObjects = 0; // 정적 데이터 필드 초기화

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
double Circle::getArea()
{
	return radius * radius * 3.14159;
}

// 원의 반지름 반환
double Circle::getRadius()
{
	return radius;
}

// 새로운 반지름 값 설정
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

// 원 객체 수 반환
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}