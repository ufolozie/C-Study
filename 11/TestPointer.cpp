#include <iostream>
using namespace std;

int main()
{
	int count = 5; // int형 변수 count 선언
	int* pCount = &count; // int 변수를 가리키는 포인터 pCount 선언과 동시에 count의 주소를 가지는 &count로 초기화

	cout << "The value of count is " << count << endl;
	cout << "The address of count is " << &count << endl;
	cout << "The address of count is " << pCount << endl;
	cout << "The value of count is " << *pCount << endl;

	return 0;
}