#include <iostream>
using namespace std;

int main()
{
	int list[6] = {11, 12, 13, 14, 15, 16};
	int* p = list; // 배열의 주소가 대입된 int 포인터 p를 선언. int* p = &list[0]; 와 동일

	for (int i = 0; i < 6; i++)
		cout << "address: " << (list + i) <<
		" value: " << *(list + i) << " " <<
		" value: " << list[i] << " " <<
		" value: " << *(p + i) << " " <<
		" value: " << p[i] << endl;

	return 0;
}