#include <iostream>
using namespace std;

int main()
{
	// �Է��� 0�� �� ������ ��� �����͸� ����
	int sum = 0;
	int data = 0;

	do
	{
		sum += data;

		// ���� ������ �б�
		cout << "Enter an integer (the input dends " <<
			"if it is 0): ";
		cin >> data;
	}
	while (data != 0);
	
	cout << "The sum is " << sum << endl;

	return 0;
}