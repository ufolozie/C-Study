#include <iostream>
using namespace std;

// 값에 의한 전달을 사용하여 두 변수 교환
void swap1(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

// 참조에 의한 전달을 사용하여 두 변수 교환
void swap2(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

// 값에 의해 두 개의 포인터 전달
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// 참조에 의해 두 개의 포인터 전달
void swap4(int* &p1, int* &p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

int main()
{
	// 변수 선언과 초기화
	int num1 = 1;
	int num2 = 2;

	cout << "Before invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;

	// 두 개의 변수를 교환하기 위해 swap 함수 호출
	swap1(num1, num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	cout << "Before invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;

	// 두 개의 변수를 교환하기 위해 swap 함수 호출
	swap2(num1, num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	cout << "Before invoking the swap function, num1 is "
		<< num1 << " and num2 is " << num2 << endl;

	// 두 개의 변수를 교환하기 위해 swap 함수 호출
	swap3(&num1, &num2);

	cout << "After invoking the swap function, num1 is " << num1 <<
		" and num2 is " << num2 << endl;

	int* p1 = &num1;
	int* p2 = &num2;
	cout << "Before invoking the swap function, p1 is "
		<< p1 << " and p2 is " << p2 << endl;

	// 두 개의 변수를 교환하기 위해 swap 함수 호출
	swap4(p1, p2);

	cout << "After invoking the swap function, p1 is " << p1 <<
		" and p2 is " << p2 << endl;

	return 0;
}