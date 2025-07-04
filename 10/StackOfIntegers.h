#ifndef STACK_H
#define STACK_H

class StackOfIntegers // 클래스 생성
{
public: // 함수 부분
	StackOfIntegers(); // 인수 없는 생성자 생성
	bool isEmpty() const; // 상수 함수 선언
	int peek() const; // 상수 함수 선언, 데이터 값에 수정이 일어나지 않음
	void push(int value); // 데이터 값에 수정이 일어남
	int pop(); //  데이터 값에 수정이 일어남
	int getSize() const; // 상수 함수 선언

private: // 변수 부분
	int elements[100];
	int size;
};

#endif