#include <iostream>
#include <iomanip>
#include "CircleWithPrivateDataFields.h"
using namespace std;

// ���� ���� ���ϱ�
double sum(Circle circleArray[], int size)
{
	// sum �ʱ�ȭ
	double sum = 0;

	// ������ sum�� ���ϱ�
	for (int i = 0; i < size; i++)
		sum += circleArray[i].getArea();
	
	return sum;
}

// ���� �迭�� ��ü ���� ���
void printCircleArray(Circle circleArray[], int size)
{
	cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(35) << left << circleArray[i].getRadius()
			<< setw(8) << circleArray[i].getArea() << endl;
	}

	cout << "----------------------------------------------" << endl;

	// ��� ��� �� ���
	cout << setw(35) << left << "The total area of circle is"
		<< setw(8) << sum(circleArray, size) << endl;
}

int main()
{
	const int SIZE = 10;

	// 10���� Circle ��ü ����. �̶� �� Circle ��ü�� radius�� 1�� �ʱ�ȭ��
	Circle circleArray[SIZE];

	for (int i = 0; i < SIZE; i++) // ù��° ��ü���� �������� 1�� ������Ű�� 1~10���� ����
	{
		circleArray[i].setRadius(i + 1);
	}

	printCircleArray(circleArray, SIZE);

	return 0;
}