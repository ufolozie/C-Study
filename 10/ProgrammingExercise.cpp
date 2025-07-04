#include <iostream>
#include <string>
using namespace std;

// 10.4
string sort(string s1)
{
	for (int i = 0; i < s1.length() - 1; i++)
	{
		char min = s1[i];
		for (int j = 1; j <= s1.length() - 1; j++)
		{
			if (min <= s1[j])
				break;
			else

		}
	}
}




int main()
{
	// 10.4
	cout << "Enter a string s: ";
	string s;
	cin >> s;

	cout << "The sorted string is " << endl;


	return 0;
}