#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	// 1�ܰ�: ������ �б�
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// 2�ܰ�: ���� ���
	double area = radius * radius * PI;

	// 3�ܰ�: ���� ���
	cout << "The area is: ";
	cout << area << endl;

	return 0;
}