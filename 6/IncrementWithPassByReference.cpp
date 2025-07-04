#include <iostream>
using namespace std;

void increment(int& n)
{
	n++; // n을 증가시키면 x의 값도 증가되므로 함수가 호출되기 전 x는 1이고, 이후에 x는 2가 된다.
	cout << "n inside the function is " << n << endl;
}

int main()
{
	int x = 1;
	cout << "Before the call, x is " << x << endl;
	increment(x);
	cout << "After the call, x is " << x << endl;

	return 0;
}