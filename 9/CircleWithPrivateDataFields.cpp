#include "CircleWithPrivateDataFields.h"

// �⺻ circle ��ü ����
Circle::Circle()
{
	radius = 1;
}

// circle ��ü ����
Circle::Circle(double newRadius)
{
	radius = newRadius;
}

// ���� ���� ��ȯ
double Circle::getArea()
{
	return radius * radius * 3.14159;
}

// ���� ������ ��ȯ
double Circle::getRadius()
{
	return radius;
}

// ���ο� ������ ����
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}