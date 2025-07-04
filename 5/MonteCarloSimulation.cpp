#include <iostream>
#include <cstdlib> // rand�� srand �Լ��� ���� ����
#include <ctime> // time �Լ��� ���� ����
using namespace std;

int main()
{
	const int NUMBER_OF_TRIALS = 1000000;
	int numberOfHits = 0;
	srand(time(0));

	for (int i = 0; i < NUMBER_OF_TRIALS; i++)
	{
		double x = rand() * 2.0 / RAND_MAX - 1;
		double y = rand() * 2.0 / RAND_MAX - 1;
		if (x * x + y * y <= 1)
			numberOfHits++;
	}

	double pi = 4.0 * numberOfHits / NUMBER_OF_TRIALS;
	cout << "PI is " << pi << endl;

	return 0;
}