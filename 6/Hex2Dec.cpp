#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// 16���� ���ڿ��� 10������ ��ȯ
int hex2Dec(const string& hex);

// 16���� ���ڸ� 10���� ������ ��ȯ
int hexCharToDecimal(char ch);

int main()
{
	// 16���� ���ڿ� �Է�
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
		decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]); // decimalValue *= 16 + hexCharToDecimal(hex[i]);���� ���� �ȵ�

	return decimalValue;
}

int hexCharToDecimal(char ch)
{
	ch = toupper(ch); // �빮�ڷ� ��ȯ
	if (ch >= 'A' && ch <= 'F')
		return 10 + ch - 'A';
	else // ch�� '0', '1', . . . , '9'
		return ch - '0';
}