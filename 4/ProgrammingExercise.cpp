#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// 4.1
	cout << "Enter the length from the center to a vertex: ";
	double r;
	cin >> r;

	const double PI = 3.14159;
	double s = 2 * r * sin(PI / 5);
	double area = (5 * s * s) / (4 * tan(PI / 5));
	cout << "The area of the pentagon is " << fixed << setprecision(2) << area << endl << endl;

	// *4.2
	double x1, y1, x2, y2;
	cout << "Enter point 1 (latitude and longitude) in degrees: " << endl;
	cin >> x1 >> y1;
	cout << "Enter point 2 (latitude and longitude) in degrees: " << endl;
	cin >> x2 >> y2;

	x1 = x1 * (PI / 180);
	y1 = y1 * (PI / 180);
	x2 = x2 * (PI / 180);
	y2 = y2 * (PI / 180);

	double d = 6378.1 * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
	cout << "The distance between the two points is " << fixed << d << " km" << endl << endl;

	// *4.3





	return 0;
}