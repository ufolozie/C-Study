#ifndef STACK_H
#define STACK_H

class StackOfIntegers // Ŭ���� ����
{
public: // �Լ� �κ�
	StackOfIntegers(); // �μ� ���� ������ ����
	bool isEmpty() const; // ��� �Լ� ����
	int peek() const; // ��� �Լ� ����, ������ ���� ������ �Ͼ�� ����
	void push(int value); // ������ ���� ������ �Ͼ
	int pop(); //  ������ ���� ������ �Ͼ
	int getSize() const; // ��� �Լ� ����

private: // ���� �κ�
	int elements[100];
	int size;
};

#endif