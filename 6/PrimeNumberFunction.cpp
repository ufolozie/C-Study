#include <iostream>
#include <iomanip>
using namespace std;

// 숫자가 소수인지 검사
bool isPrime(int number)
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{
			// 참이면 숫자는 소수가 아님
			return false; // 숫자는 소수가 아님
		}
	}

	return true; // 숫자는 소수임
}

void printPrimeNumbers(int numberOfPrimes)
{
	const int NUMBER_OF_PRIMES = 50; // 출력할 소수의 수
	const int NUMBER_OF_PRIMES_PER_LINE = 10; // 한 줄에 10개씩 출력
	int count = 0; // 소수의 개수
	int number = 2; // 소수인지를 검사할 숫자

	// 반복적으로 소수 찾기
	while (count < numberOfPrimes)
	{
		// 소수 출력과 count 증가
		if (isPrime(number))
		{
			count++; // count 증가

			if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
			{
				// 숫자 출력과 새로운 줄로 이동
				cout << setw(4) << number << endl;
			}
			else
				cout << setw(4) << number;
		}
		// 댜음 숫자가 소수인지 검사
		number++;
	}
}

int main()
{
	cout << "The first 50 prime numbers are \n";
	printPrimeNumbers(50);

	return 0;
}