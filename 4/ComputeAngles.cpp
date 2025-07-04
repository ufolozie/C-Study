#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// 세 점 입력
	cout << "Enter the coordinates of three points separated "
		<< "by spaces like x1 y1 x2 y2 x3 y3: ";
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// 세 번 계산
	double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	// 라디안(radian) 단위로 세 각 계산
	double A = acos((a * a - b * b - c * c) / (-2 * b * c));
	double B = acos((b * b - a * a - c * c) / (-2 * a * c));
	double C = acos((c * c - a * a - b * b) / (-2 * a * b));

	// 도(degree) 단위로 각도 화면 표시
	const double PI = 3.14159;
	cout << "The three angles are " << A * 180 / PI << " "
		<< B * 180 / PI << " " << C * 180 / PI << endl;

	return 0;
}