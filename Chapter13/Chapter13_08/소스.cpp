#include <iostream>
using namespace std;

/*
	멤버 함수의 매개 변수를 추가적으로 템플릿 하는 방법
*/

template<class T>
class A
{
private:
	T m_value;

public:
	A(const T& input)
		:m_value(input)
	{

	}

	template<typename TT>
	void doSomething(const TT & input)
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)m_value << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	//A<int> a_int(123);
	//a_int.print();
	//
	//a_int.doSomething('a');


	A<char> a_char('A');
	a_char.print();
	a_char.doSomething(char());

	return 0;
}