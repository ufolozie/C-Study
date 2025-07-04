#include <iostream>
using namespace std;

// 함수 원형
int max(int num1, int num2);
double max(double num1, double num2);
double max(double num1, double num2, double num3);

int main()
{
	// int 매개변수가 있는 max 함수 호출
	cout << "The maximum between 3 and 4 is " <<
		max(3, 4) << endl;

	// double 매개변수가 있는 max 함수 호출
	cout << "The maximum between 3.0 and 5.4 is " 
		<< max(3.0, 5.4) << endl;

	// 3개의 double 매개변수가 있는 max 함수 호출
	cout << "The maximum between 3.0, 5.4, and 10.14 is " 
		<< max(3.0, 5.4, 10.14) << endl;

	return 0;
}

// 두 정수 중 큰 수 반환
int max(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// 두 double 형 값 중 큰 값 반환
double max(double num1, double num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// 세 개의 double 형 값 중 최댓값 반환
double max(double num1, double num2, double num3)
{
	return max(max(num1, num2), num3);
}