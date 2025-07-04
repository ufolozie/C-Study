#include "CircleWithConstantMemberFunctions.h"

int Circle::numberOfObjects = 0;

// circle ��ü ����
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

// circle ��ü ����
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

// ���� ���� ��ȯ
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

// ���� ������ ����
double Circle::getRadius() const
{
	return radius;
}

// ���ο� ������ ����
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

// circle ��ü�� �� ��ȯ
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}