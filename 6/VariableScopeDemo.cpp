#include <iostream>
using namespace std;

void t1(); // �Լ� ����
void t2(); // �Լ� ����

int main()
{
	t1();
	t2();

	return 0;
}

int y; // ���� ����, �⺻ ���� 0

void t1() // �Լ� ����
{
	int x = 1; // ���� ����
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	x++; // x ����
	y++; // y ����
}

void t2() // �Լ� ����
{
	int x = 1; // ���� ����
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}