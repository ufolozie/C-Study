#include <iostream>
using namespace std;

inline void f(int month, int year)
{
	cout << "month is " << month << endl;
	cout << "year is " << year << endl;
}

int main()
{
	int month = 10, year = 2008;
	f(month, year); // 인라인 함수 호출
	f(9, 2010); // 인라인 함수 호출

	return 0;
}