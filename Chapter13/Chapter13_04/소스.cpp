#include <iostream>
#include "Storage.h"

using namespace std;

/*
	13.4 �Լ� ���ø� Ư��ȭ

	����ȶ������̼� : Ư�� ���������� ���� ������ �ൿ�� �ϱ� ���� ���� �Ѱ�
	
*/

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>	// ����� �������̼��� �� getMax<char> �Լ�
char getMax(char x, char y)
{
	cout << "Warning : comparing chars" << endl;

	return (x > y) ? x : y;
}

int main()
{
	//cout << getMax<int>(1, 2) << endl;
	//cout << getMax('a', 'b') << endl;

	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print();
	dValue.print();
}

