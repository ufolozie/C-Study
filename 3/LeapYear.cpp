#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a year: ";
	int year;
	cin >> year;

	// 입력한 연도가 윤년인지 검사
	bool isLeapYear =
		(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	// 결과 화면 출려
	if (isLeapYear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is a not leap year" << endl;

	return 0;
}