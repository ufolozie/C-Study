#include <iostream>
using namespace std;

int main()
{
	// Check Point 3.33
	// switch �� ����Ͽ� y�� ���ϱ�
	int x = 3; // ���� ����� �ʱ�ȭ
	int y = 3;
	switch (x + 3)
	{
	    case 6: y = 1;
			cout << y << endl; break;
	    default: y += 1;
			cout << "y is " << y << endl; 
	}

	// if �� ����Ͽ� y�� ���ϱ�
	y = 3; // ���� �ʱ�ȭ
	if (x + 3 == 6)
	{
		y = 1;
		cout << y << endl;
	}
	else
	{
		y += 1;
		cout << "y is " << y << endl;
	}

	// Check Point 3.34
	// if �� ����Ͽ� x�� ���ϱ�
	x = 1;
	int a = 3;
	if (a == 1)
	{
		x += 5;
		cout << "x is " << x << endl;
	}
	else if (a == 2)
	{
		x += 10;
		cout << "x is " << x << endl;
	}
	else if (a == 3)
	{
		x += 16;
		cout << "x is " << x << endl;
	}
	else if (a == 4)
	{
		x += 34;
		cout << "x is " << x << endl;
	}

	// switch �� ����Ͽ� x�� ���ϱ�
	x = 1;
	a = 3;
	switch (a)
	{
	    case 1: x += 5;
		    cout << "x is " << x << endl; break;
	    case 2: x += 10;
		    cout << "x is " << x << endl; break;
	    case 3: x += 16;
		    cout << "x is " << x << endl; break;
	    case 4: x += 34;
		    cout << "x is " << x << endl; break;
	}

	// Check Point 3.36
	int ages;
	double ticketPrice;

	if (ages >= 16)
		ticketPrice = 20;
	else
		ticketPrice = 10;

	ticketPrice = ages >= 16 ? 20 : 10;

	int count;
	if (count % 10 == 0)
		cout << count << endl;
	else
		cout << count << " ";

	cout << ((count % 10 == 0) ? count + "\n" : count + " ");

	return 0;
}