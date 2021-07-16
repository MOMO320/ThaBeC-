#include <iostream>
using namespace std;

/* 부분적으로 Specialization 하는 방법 */

template <class T, int size>
class StaticArray_BASE
{
private:
	T m_array[size];

public:
	T* getArray() { return m_array; }

	T& operator[](int index)
	{
		return m_array[index];
	}

	// 멤버 안에 있는 specialization 할때는 상속을 하여 오버라이드 하면 편하다.
	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count] << ' ';
		std::cout << endl;
	}
};

template<class T , int size>
class StaticArray : public StaticArray_BASE<T,size>
{

};


// 상속 구조를 이용해 char spectialization을 하였다.
template< int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count];
		std::cout << endl;
	}
};


//
//template<int size>
//void print (StaticArray<char, size>& array)
//{
//	for (int count = 0; count < size; ++count)
//		std::cout << array[count];
//	std::cout << endl;
//}

int main()
{
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.print();

	StaticArray<char, 14> char14;
	char14[0] = 'H';
	char14[1] = 'e';

	strcpy_s(char14.getArray(), 14, "Hello, World");

	char14.print();

	return 0;

}