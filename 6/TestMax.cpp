#include <iostream>
using namespace std;

// �� �� �� ū ���� ��ȯ
int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}

int main()
{
	int i = 5;
	int j = 2;
	int k = max(i, j); // max �Լ��� ȣ��Ǹ� ��� max �Լ�(5~15�� ��)�� �Ѿ��, max �Լ��� ������ ������ �� ȣ�� ��(�� ��� main �Լ�)���� ��� �ǵ��� �ش�.
	cout << "The maiximum between " << i <<
		" and " << j << " is " << k << endl;

	return 0;
}