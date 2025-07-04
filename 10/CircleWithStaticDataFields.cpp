#include "CircleWithStaticDataFields.h"

int Circle::numberOfObjects = 0; // ���� ������ �ʵ� �ʱ�ȭ

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
double Circle::getArea()
{
	return radius * radius * 3.14159;
}

// ���� ������ ��ȯ
double Circle::getRadius()
{
	return radius;
}

// ���ο� ������ �� ����
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

// �� ��ü �� ��ȯ
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}