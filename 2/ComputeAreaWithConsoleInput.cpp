#include <iostream>
using namespace std;

int main()
{
	// 1단계: 반지름 읽기
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// 2단계: 면적 계산
	double area = radius * radius * 3.14159;

	// 3단계: 면적 출력
	cout << "The area is " << area << endl;

	return 0;
}