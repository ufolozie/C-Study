#include <iostream>
using namespace std;

// 면적 계산 출력
void printArea(double radius = 1)
{
	double area = radius * radius * 3.14159;
	cout << "area is " << area << endl;
}

int main()
{
	printArea();
	printArea(4);

	return 0;
}