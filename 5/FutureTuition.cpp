#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double tuition = 10000; // 0³â
	int year = 0;
	while (tuition < 20000)
	{
		tuition = tuition * 1.07;
		year++;
	}

	cout << "Tuition will be douled in " << year << " years" << endl;
	cout << setprecision(2) << fixed << "Tuition will be $" << tuition << " in "
		<< year << " years" << endl;

	return 0;
}