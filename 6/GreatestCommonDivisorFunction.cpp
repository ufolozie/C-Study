#include <iostream>
using namespace std;

// �� ������ �ִ� ����� ��ȯ
int gcd(int n1, nt n2)
{
	int gcd = 1; // �ִ� ������� �ʱ� ���� 1
	int k = 2; // ������ �ִ� �����

	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0 && n2 % k == 0)
			gcd = k; // �ִ� ����� ������Ʈ
		k++;
	}

	return gcd; // �ִ� ����� ��ȯ
}

int main()
{
	// �� ���� ���� �Է�
	cout << "Enter first integer: ";
	int n1;
	cin >> n1;

	cout << "Enter second integer: ";
	int n2;
	cin >> n2;

	cout << "The greatest common divisor for " << n1 <<
		" and " << n2 << " is " << gcd(n1, n2) << endl;

	return 0;
}