#include "StackOfIntegers.h"

StackOfIntegers::StackOfIntegers()
{
	size = 0; // 인수 없는 생성자 StackOfIntegers()는 데이터필드를 초기화 한다.
}

bool StackOfIntegers::isEmpty() const
{
	return size == 0; // 스택의 사이즈가 0이면 참을 반환
}

int StackOfIntegers::peek() const
{
	return elements[size - 1]; // 스택 제일 위(size - 1)의 정수를 반환
}

void StackOfIntegers::push(int value)
{
	elements[size++] = value; // 스택 제일 위에 정수 저장. 저장할 당시에 스택의 크기가 3이었으면 저장 후 스택의 크기는 4가 된다.
	/*elements[size] = value; size++; 로 바꿔쓸 수 있다.*/
}

int StackOfIntegers::pop()
{
	return elements[size--] // 스택 제일 위에 있는 정수를 제거하고 반환한다. 작업 수행 당시 스택의 크기가 3이었으면 수행 후 스택의 크기는 2가 된다.
}

int StackOfIntegers::getSize() const
{
	return size;
}