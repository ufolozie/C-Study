#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
	StackOfIntegers stack; // StackOfIntegers Ŭ������ ��ü stack ����

	for (int i = 0; i < 10; i++)
		stack.push(i); // 0���� 9������ ���ڸ� ���ʴ�� ���ÿ� �ϳ��� Ǫ��

	while (!stack.isEmpty()) // ������ ������� �ʴ� ���� ����
		cout << stack.pop() << " "; // ���� ���� ����� ������ �����ϰ� �� ���� ��ȯ

	return 0;
}