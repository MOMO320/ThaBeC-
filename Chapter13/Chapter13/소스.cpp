#include <iostream>
#include "Cents.h"
/*
	컴파일러가 내부적으로 만들고 있다.
	인스턴세이션 : 특정한 데이터 타입에 대해서 실제로 만드는 것
	인스턴스 : 객체가 특별한 경우에 대해서 예시 처럼 작동하는 것 메모리에 실제로 객체를 갖고
*/

template <typename T>
T getMax(T x, T y)	
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << getMax(1, 2) << std::endl;
	std::cout << getMax(3.14, 1.592) << std::endl;
	std::cout << getMax(1.0f, 3.4f) << std::endl;
	std::cout << getMax('a', 'c') << std::endl;

	std::cout << getMax(Cents(5), Cents(9)) << std::endl;

	return 0;
}