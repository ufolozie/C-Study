#include <iostream>
using namespace std;

int main()
{
	// ����ڿ��� �Է� ��û
	int seconds;
	cout << "Enter an integer for seconds: ";
	cin >> seconds;
	int minutes = seconds / 60;
	int remainingSeconds = seconds % 60;
	cout << seconds << " seconds is " << minutes << " minutes and " << remainingSeconds << " seconds " << endl;

	return 0;
}