#include <iostream>
using namespace std;

int main()
{
	const int NUMBER_OF_ELEMENTS = 100; // 배열의 크기는 고정되어야 하므로 상수로 초기화함
	double numbers[NUMBER_OF_ELEMENTS]; // 100개의 요소를 갖는 배열 선언
	double sum = 0;

	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
	{
		cout << "Enter a new number: ";
		cin >> numbers[i]; // 배열로 숫자 저장
		sum += numbers[i]; // 각 수를 sum에 합함
	}

	double average = sum / NUMBER_OF_ELEMENTS; // 평균 계산
	int count = 0; // 평균보다 큰 요소의 수
	// 평균보다 큰 값의 수를 세기 위하여 배열의 각 값을 평균과 비교
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
		if (numbers[i] > average)
			count++;

	cout << "Average is " << average << endl;
	cout << "Number of elements above the average " << count << endl;

	return 0;
}