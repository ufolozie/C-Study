#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
	StackOfIntegers stack; // StackOfIntegers 클래스의 객체 stack 생성

	for (int i = 0; i < 10; i++)
		stack.push(i); // 0부터 9까지의 숫자를 차례대로 스택에 하나씩 푸쉬

	while (!stack.isEmpty()) // 스택이 비어있지 않는 동안 실행
		cout << stack.pop() << " "; // 스택 제일 상단의 정수를 제거하고 그 값을 반환

	return 0;
}