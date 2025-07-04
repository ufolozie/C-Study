#include "Circle.h" // CPP파일. Circle 클래스의 구현, 즉 생성자(객체를 생성하기 위해 호출)와 함수를 만듦

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