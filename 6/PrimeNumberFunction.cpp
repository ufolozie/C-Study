#include <iostream>
#include <iomanip>
using namespace std;

// ���ڰ� �Ҽ����� �˻�
bool isPrime(int number)
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{
			// ���̸� ���ڴ� �Ҽ��� �ƴ�
			return false; // ���ڴ� �Ҽ��� �ƴ�
		}
	}

	return true; // ���ڴ� �Ҽ���
}

void printPrimeNumbers(int numberOfPrimes)
{
	const int NUMBER_OF_PRIMES = 50; // ����� �Ҽ��� ��
	const int NUMBER_OF_PRIMES_PER_LINE = 10; // �� �ٿ� 10���� ���
	int count = 0; // �Ҽ��� ����
	int number = 2; // �Ҽ������� �˻��� ����

	// �ݺ������� �Ҽ� ã��
	while (count < numberOfPrimes)
	{
		// �Ҽ� ��°� count ����
		if (isPrime(number))
		{
			count++; // count ����

			if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
			{
				// ���� ��°� ���ο� �ٷ� �̵�
				cout << setw(4) << number << endl;
			}
			else
				cout << setw(4) << number;
		}
		// ���� ���ڰ� �Ҽ����� �˻�
		number++;
	}
}

int main()
{
	cout << "The first 50 prime numbers are \n";
	printPrimeNumbers(50);

	return 0;
}