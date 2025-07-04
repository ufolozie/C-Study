#include <iostream>
using namespace std;

// ���� ���� ������ ����Ͽ� �� ���� ��ȯ
void swap1(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

// ������ ���� ������ ����Ͽ� �� ���� ��ȯ
void swap2(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

// ���� ���� �� ���� ������ ����
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// ������ ���� �� ���� ������ ����
void swap4(int* &p1, int* &p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

int main()
{
	// ���� ����� �ʱ�ȭ
	int num1 = 1;
	int num2 = 2;

	cout << "Before invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;

	// �� ���� ������ ��ȯ�ϱ� ���� swap �Լ� ȣ��
	swap1(num1, num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	cout << "Before invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;

	// �� ���� ������ ��ȯ�ϱ� ���� swap �Լ� ȣ��
	swap2(num1, num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	cout << "Before invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;

	// �� ���� ������ ��ȯ�ϱ� ���� swap �Լ� ȣ��
	swap3(&num1, &num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	int* p1 = &num1;
	int* p2 = &num2;
	cout << "Before invoking the swap function, p1 is "
		<< p1 << " and p2 is " << p2 << endl;

	// �� ���� ������ ��ȯ�ϱ� ���� swap �Լ� ȣ��
	swap4(p1, p2);

	cout << "After invoking the swap function, p1 is " << p1 <<
		" and p2 is " << p2 << endl;

	return 0;
}