#include <iostream>
#include <string>
using namespace std;

// s 내의 oldSubStr을 newSubStr로 교체한다.
bool replaceString(string& s, const string& oldSubStr,
	const string& newSubStr);

int main()
{
	// 사용자가 s, oldSubStr, newSubStr을 입력한다.
	cout << "Enter string s, oldSubStr, old newSubStr: ";
	string s, oldSubStr, newSubStr;
	cin >> s >> oldSubStr >> newSubStr;

	bool isReplaced = replaceString(s, oldSubStr, newSubStr);

	if (isReplaced)
		cout << "The replaced string is " << s << endl;
	else
		cout << "No matches" << endl;

	return 0;
}

bool replaceString(string& s, const string& oldSubStr,
	const string& newSubStr)
{
	bool isReplaced = false;
	int currentPosition = 0;
	while (currentPosition < s.length())
	{
		int position = s.find(oldSubStr, currentPosition);
		if (position == string::npos) // 더 이상 일치하는 내용이 없다.
			return isReplaced;
		else
		{
			s.replace(position, oldSubStr.length(), newSubStr);
			currentPosition = position + newSubStr.length();
			isReplaced = true; // 적어도 한 개는 일치
		}
	}

	return isReplaced;
}