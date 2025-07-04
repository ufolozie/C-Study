#include <iostream>
#include <iomanip>
#include "CircleWithPrivateDataFields.h"
using namespace std;

// 원의 면적 더하기
double sum(Circle circleArray[], int size)
{
	// sum 초기화
	double sum = 0;

	// 면적을 sum에 더하기
	for (int i = 0; i < size; i++)
		sum += circleArray[i].getArea();
	
	return sum;
}

// 원의 배열과 전체 면적 출력
void printCircleArray(Circle circleArray[], int size)
{
	cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(35) << left << circleArray[i].getRadius()
			<< setw(8) << circleArray[i].getArea() << endl;
	}

	cout << "----------------------------------------------" << endl;

	// 결과 계산 및 출력
	cout << setw(35) << left << "The total area of circle is"
		<< setw(8) << sum(circleArray, size) << endl;
}

int main()
{
	const int SIZE = 10;

	// 10개의 Circle 객체 생성. 이때 각 Circle 객체의 radius는 1로 초기화됨
	Circle circleArray[SIZE];

	for (int i = 0; i < SIZE; i++) // 첫번째 객체부터 반지름을 1씩 증가시키며 1~10으로 설정
	{
		circleArray[i].setRadius(i + 1);
	}

	printCircleArray(circleArray, SIZE);

	return 0;
}