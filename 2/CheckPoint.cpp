#include <iostream>
using namespace std;

int main()
{
	double miles = 100;
	const double KILOMETERS_PER_MILE = 1.609;
	double kilometers = miles * KILOMETERS_PER_MILE;
	cout << kilometers;

	return 0;
}