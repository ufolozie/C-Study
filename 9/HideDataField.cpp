#include <iostream>
using namespace std;

class Foo
{
public:
	int x; // 데이터 필드
	int y; // 데이터 필드

	Foo()
	{
		x = 10;
		y = 10;
	}

	void p()
	{
		int x = 20; // 지역 변수
		cout << "x is " << x << endl;
		cout << "y is " << y << endl;
	}
};

int main()
{
	Foo foo;
	foo.p();

	return 0;
}