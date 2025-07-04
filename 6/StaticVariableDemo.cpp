#include <iostream>
using namespace std;

void t1(); // 함수 원형

int main()
{
	t1();
	t1();

	return 0;
}

void t1()
{
	static int x = 1; // 정적 지역 변수
	int y = 1; // 지역 변수
	x++; // x 증가
	y++; // y 증가
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}