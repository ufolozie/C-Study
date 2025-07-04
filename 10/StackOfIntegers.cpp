#include "StackOfIntegers.h"

StackOfIntegers::StackOfIntegers()
{
	size = 0; // �μ� ���� ������ StackOfIntegers()�� �������ʵ带 �ʱ�ȭ �Ѵ�.
}

bool StackOfIntegers::isEmpty() const
{
	return size == 0; // ������ ����� 0�̸� ���� ��ȯ
}

int StackOfIntegers::peek() const
{
	return elements[size - 1]; // ���� ���� ��(size - 1)�� ������ ��ȯ
}

void StackOfIntegers::push(int value)
{
	elements[size++] = value; // ���� ���� ���� ���� ����. ������ ��ÿ� ������ ũ�Ⱑ 3�̾����� ���� �� ������ ũ��� 4�� �ȴ�.
	/*elements[size] = value; size++; �� �ٲ㾵 �� �ִ�.*/
}

int StackOfIntegers::pop()
{
	return elements[size--] // ���� ���� ���� �ִ� ������ �����ϰ� ��ȯ�Ѵ�. �۾� ���� ��� ������ ũ�Ⱑ 3�̾����� ���� �� ������ ũ��� 2�� �ȴ�.
}

int StackOfIntegers::getSize() const
{
	return size;
}