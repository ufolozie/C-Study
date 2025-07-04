#include <iostream>
using namespace std;

int main()
{
	// sum 초기화
	double sum = 0;

	/*// sum에 0.01, 0.02, . . . , 0.99, 1 더하기
	for (double i = 0.01; i <= 1.0; i = i + 0.01)
		sum += i;*/

	double currentValue = 0.01;

	for (int count = 0; count < 100; count++)
	{
		sum += currentValue;
		currentValue += 0.01;
	}

	// 결과 출력
	cout << "The sum is " << sum << endl;

	return 0;
}