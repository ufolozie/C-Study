#include <iostream>
using namespace std;

int main()
{
	// 1�ܰ�: ������ �б�
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// 2�ܰ�: ���� ���
	double area = radius * radius * 3.14159;

	// 3�ܰ�: ���� ���
	cout << "The area is " << area << endl;

	return 0;
}