#include "Circle.h" // CPP����. Circle Ŭ������ ����, �� ������(��ü�� �����ϱ� ���� ȣ��)�� �Լ��� ����

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