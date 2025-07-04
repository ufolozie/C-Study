#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// 16진수 문자열을 10진수로 변환
int hex2Dec(const string& hex);

// 16진수 문자를 10진수 값으로 변환
int hexCharToDecimal(char ch);

int main()
{
	// 16진수 문자열 입력
	cout << "Enter a hex number: ";
	string hex;
	cin >> hex;

	cout << "The decimal value for hex number " << hex
		<< " is " << hex2Dec(hex) << endl;

	return 0;
}

int hex2Dec(const string& hex)
{
	int decimalValue = 0;
	for (unsigned i = 0; i < hex.size(); i++)
		decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]); // decimalValue *= 16 + hexCharToDecimal(hex[i]);으로 쓰면 안됨

	return decimalValue;
}

int hexCharToDecimal(char ch)
{
	ch = toupper(ch); // 대문자로 변환
	if (ch >= 'A' && ch <= 'F')
		return 10 + ch - 'A';
	else // ch는 '0', '1', . . . , '9'
		return ch - '0';
}