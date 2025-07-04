#include <iostream>
using namespace std;

// 두 변수 교환
void swap(int& n1, int& n2)
{
	cout << "\tInside the swap function" << endl;
	cout << "\tBefore swapping n1 is " << n1 <<
		" n2 is " << n2 << endl;

	// n1과 n2 교환
	int temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "\tAfter swapping n1 is " << n1 <<
		" n2 is " << n2 << endl;
}

int main()
{
	// 변수 선언과 초기화
	int num1 = 1;
	int num2 = 2;

	cout << "Before invoking the swap function, num1 is " 
		<< num1 << " and num2 is " << num2 << endl;

	// 두 변수를 교환하기 위해 swap 함수 호출
	swap(num1, num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	return 0;
}