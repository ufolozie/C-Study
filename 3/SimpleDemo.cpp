#include <iostream>
using namespace std;

int main()
{
	// ������ �Է��ϵ��� �Ѵ�.
	int number;
	cout << "Enter an integer: ";
	cin >> number;

	if (number % 5 == 0)
		cout << "HiFive" << endl;

	if (number % 2 == 0)
		cout << "HiEven" << endl;

	return 0;
}