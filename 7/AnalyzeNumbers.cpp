#include <iostream>
using namespace std;

int main()
{
	const int NUMBER_OF_ELEMENTS = 100; // �迭�� ũ��� �����Ǿ�� �ϹǷ� ����� �ʱ�ȭ��
	double numbers[NUMBER_OF_ELEMENTS]; // 100���� ��Ҹ� ���� �迭 ����
	double sum = 0;

	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
	{
		cout << "Enter a new number: ";
		cin >> numbers[i]; // �迭�� ���� ����
		sum += numbers[i]; // �� ���� sum�� ����
	}

	double average = sum / NUMBER_OF_ELEMENTS; // ��� ���
	int count = 0; // ��պ��� ū ����� ��
	// ��պ��� ū ���� ���� ���� ���Ͽ� �迭�� �� ���� ��հ� ��
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
		if (numbers[i] > average)
			count++;

	cout << "Average is " << average << endl;
	cout << "Number of elements above the average " << count << endl;

	return 0;
}