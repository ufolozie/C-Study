#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// 1970�� 1�� 1�� ���� ������ �� �� ���
	int totalSeconds = time(0);

	// ���� �ð��� �� �� ���
	int currentSecond = totalSeconds % 60;

	// ��ü �� ���
	int totalMinutes = totalSeconds / 60;

	// ���� �� �� ���
	int currentMinute = totalMinutes % 60;

	// ��ü �ð� �� ���
	int totalHours = totalMinutes / 60;

	// ���� �ð� �� ���
	int currentHour = totalHours % 24;

	// ��� ȭ�� ���
	cout << "Current time is " << currentHour << ":"
		<< currentMinute << ":" << currentSecond << " GMT" << endl;

	return 0;
}