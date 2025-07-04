#include <iostream>
using namespace std;

// 두 수 중 큰 값을 반환
int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}

int main()
{
	int i = 5;
	int j = 2;
	int k = max(i, j); // max 함수가 호출되면 제어가 max 함수(5~15번 줄)로 넘어가고, max 함수의 실행이 끝났을 때 호출 측(이 경우 main 함수)으로 제어를 되돌려 준다.
	cout << "The maiximum between " << i <<
		" and " << j << " is " << k << endl;

	return 0;
}