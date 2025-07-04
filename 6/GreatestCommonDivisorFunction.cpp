#include <iostream>
using namespace std;

// 두 정수의 최대 공약수 반환
int gcd(int n1, nt n2)
{
	int gcd = 1; // 최대 공약수의 초기 값은 1
	int k = 2; // 가능한 최대 공약수

	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0 && n2 % k == 0)
			gcd = k; // 최대 공약수 업데이트
		k++;
	}

	return gcd; // 최대 공약수 반환
}

int main()
{
	// 두 개의 정수 입력
	cout << "Enter first integer: ";
	int n1;
	cin >> n1;

	cout << "Enter second integer: ";
	int n2;
	cin >> n2;

	cout << "The greatest common divisor for " << n1 <<
		" and " << n2 << " is " << gcd(n1, n2) << endl;

	return 0;
}