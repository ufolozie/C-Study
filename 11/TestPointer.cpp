#include <iostream>
using namespace std;

int main()
{
	int count = 5; // int�� ���� count ����
	int* pCount = &count; // int ������ ����Ű�� ������ pCount ����� ���ÿ� count�� �ּҸ� ������ &count�� �ʱ�ȭ

	cout << "The value of count is " << count << endl;
	cout << "The address of count is " << &count << endl;
	cout << "The address of count is " << pCount << endl;
	cout << "The value of count is " << *pCount << endl;

	return 0;
}