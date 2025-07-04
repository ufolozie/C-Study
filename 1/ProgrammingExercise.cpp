#include <iostream>
using namespace std;

int main()
{
	// 1.1
	cout << "Welcome to C++" << endl;
	cout << "Welcome to Computer Science" << endl;
	cout << "Programming is fun" << endl << endl;

	// 1.2
	cout << "Welcome to C++" << endl;
	cout << "Welcome to C++" << endl;
	cout << "Welcome to C++" << endl;
	cout << "Welcome to C++" << endl;
	cout << "Welcome to C++" << endl << endl;

	// *1.3
	cout << "  CCCC       +         +" << endl;
	cout << " C           +         +" << endl;
	cout << "C         +++++++   +++++++" << endl;
	cout << " C           +         +" << endl;
	cout << "  CCCC       +         +" << endl<< endl;

	// 1.4
	cout << "a    a^2    a^3" << endl;
	cout << "1    1      1" << endl;
	cout << "2    4      8" << endl;
	cout << "3    9      27" << endl;
	cout << "4    16     64" << endl << endl;

	// 1.5
	cout << "(9.5 * 4.5 + 2.5 * 3) / (45.5 - 3.5) = " << (9.5 * 4.5 + 2.5 * 3) / (45.5 - 3.5) << endl << endl;

	// 1.6
	cout << "1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = "
		<< 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 << endl << endl;

	// 1.7
	cout << "4 * (1 - 1.0 / 3 + 1.0 / 5 - 1.0 / 7 + 1.0 / 9 - 1.0 / 11) = " << 4 * (1 - 1.0 / 3 + 1.0 / 5 - 1.0 / 7 + 1.0 / 9 - 1.0 / 11) << endl;
	cout << "4 * (1 - 1.0 / 3 + 1.0 / 5 - 1.0 / 7 + 1.0 / 9 - 1.0 / 11 + 1.0 / 13) = " << 4 * (1 - 1.0 / 3 + 1.0 / 5 - 1.0 / 7 + 1.0 / 9 - 1.0 / 11 + 1.0 / 13) << endl << endl;

	// 1.8
	const double PI = 3.14159;
	double r = 5.5;
	double 원의면적 = pow(r, 2) * PI;
	double 원의둘레 = 2 * r * PI;

	cout << "반지름이 5.5인 원의 면적은 " << 원의면적 << " 입니다" << endl;
	cout << "반지름이 5.5인 원의 둘레은 " << 원의둘레 << " 입니다" << endl << endl;

	// 1.9
	cout << "폭이 4.5이고 높이가 7.9인 직사각형의 면적은 " << 4.5 * 7.9 << " 입니다" << endl;
	cout << "폭이 4.5이고 높이가 7.9인 직사각형의 둘레는 " << 2 * 4.5 + 2 * 7.9 << " 입니다" << endl << endl;

	// 1.10
	cout << "45분 30초 동안 14킬로미터를 달린 선수의 시간 당 마일의 평균 속도는 " << ((14 / 45.5) * 60) / 1.6 << "mph 입니다" << endl << endl;

	// *1.11
	int 현재인구 = 312032486;
    double 출생인구 = (1 / 7.0) * 60 * 60 * 24 * 365;
	double 사망인구 = (1 / 13.0) * 60 * 60 * 24 * 365;
	double 이민인구 = (1 / 45.0) * 60 * 60 * 24 * 365;
	double 증감인구 = 출생인구 - 사망인구 + 이민인구;

	int 일년후 = 현재인구 + 증감인구;
	int 이년후 = 일년후 + 증감인구; 
	int 삼년후 = 이년후 + 증감인구;
	int 사년후 = 삼년후 + 증감인구;
	int 오년후 = 사년후 + 증감인구;

	cout << "1년 후 인구는 " << 일년후 << " 명 입니다" << endl;
	cout << "2년 후 인구는 " << 이년후 << " 명 입니다" << endl;
	cout << "3년 후 인구는 " << 삼년후 << " 명 입니다" << endl;
	cout << "4년 후 인구는 " << 사년후 << " 명 입니다" << endl;
	cout << "5년 후 인구는 " << 오년후 << " 명 입니다" << endl << endl;

	// 1.12
	cout << "40분 35초 동안 24마일을 달린 선수의 시간 당 킬로미터의 평균 속도는 " << (24 / (1 + (40 + 35.0 / 60) / 60)) * 1.6 << "km/h 입니다" << endl;

	return 0;
}