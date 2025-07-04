#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// 파일 열기
	ifstream input("numbers.txt");

	double sum = 0;
	double number;
	while (!input.eof()) // 파일의 끝이 아니면 계속 실행
	{
		input >> number; // 데이터 입력
		cout << number << " "; // 데이터 출력
		sum += number;
	}

	input.close();

	cout << "\nSum is " << sum << endl;

	return 0;
}