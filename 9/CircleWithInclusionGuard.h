#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	// ���� ������
	double radius;

	// �⺻ circle ��ü ����
	Circle();

	// circle ��ü ����
	Circle(double);

	// ���� ���� ��ȯ
	double getArea();
};

#endif