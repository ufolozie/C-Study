#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// 1970년 1월 1일 자정 이후의 초 값 계산
	int totalSeconds = time(0);

	// 현재 시간의 초 값 계산
	int currentSecond = totalSeconds % 60;

	// 전체 분 계산
	int totalMinutes = totalSeconds / 60;

	// 현재 분 값 계산
	int currentMinute = totalMinutes % 60;

	// 전체 시간 값 계산
	int totalHours = totalMinutes / 60;

	// 현재 시간 값 계산
	int currentHour = totalHours % 24;

	// 결과 화면 출력
	cout << "Current time is " << currentHour << ":"
		<< currentMinute << ":" << currentSecond << " GMT" << endl;

	return 0;
}