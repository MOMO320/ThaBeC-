#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

/*
	13.5 Ŭ���� ���ø� Ư��ȭ

	class specialization
*/

template <typename T>
class A
{
public:
	A(const T& input)
	{}

	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{

	}
};


// char���� ���� class specialization
// �ٸ� Ŭ���� �����ϴ°ſ� ����.
template<>
class A<char>
{
public:
	A(const char& input)
	{
	}
	void doSomething()
	{
		cout << " char type specialization" << endl;
	}
};

int main()
{
	//A<int> a_int(1);
	//A<double> a_double(3.14);
	//A<char> a_char('a');
	//
	//a_int.test();
	//a_double.test();
	//// a_char.  test�Լ� ����.
	//
	//a_int.doSomething();
	//a_double.doSomething();
	//a_char.doSomething();

	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.get(count) << '\n';

	cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.get(count) << '\n';

	cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl;


}