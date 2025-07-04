#include <iostream>
using namespace std;

int main()
{
	// 정수를 입력하도록 한다.
	int number;
	cout << "Enter an integer: ";
	cin >> number;

	if (number % 5 == 0)
		cout << "HiFive" << endl;

	if (number % 2 == 0)
		cout << "HiEven" << endl;

	return 0;
}