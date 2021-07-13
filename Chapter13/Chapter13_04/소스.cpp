#include <iostream>
#include "Storage.h"

using namespace std;

/*
	13.4 함수 템플릿 특수화

	스폐셜라이제이션 : 특정 데이터형에 대한 별도의 행동을 하기 위해 정의 한것
	
*/

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>	// 스폐셜 라이제이션을 한 getMax<char> 함수
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

