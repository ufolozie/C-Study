#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	// 1단계: 반지름 읽기
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// 2단계: 면적 계산
	double area = radius * radius * PI;

	// 3단계: 면적 출력
	cout << "The area is: ";
	cout << area << endl;

	return 0;
}