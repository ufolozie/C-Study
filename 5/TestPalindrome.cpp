#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 문자열 입력
	cout << "Enter a string: ";
	string s;
	getline(cin, s);

	// 문자열의 첫 번째 문자 인덱스
	int low = 0;

	// 문자열의 마지막 문자 인덱스
	int high = s.length() - 1;

	bool isPalindrome = true;
	while (low < high)
	{
		if (s[low] != s[high])
		{
			isPalindrome = false; // 회문이 아님
			break;
		}

		low++;
		high--;
	}

	if (isPalindrome)
		cout << s << " is a palindrome" << endl;
	else
		cout << s << " is not a palindrome" << endl;

	return 0;
}