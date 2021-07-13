#pragma once
#include <assert.h>
#include <iostream>

/*
	��Ÿ�� �Ķ���͸� ����� ��� ����� �� ������ �������� ����.

	unsigned int T_SIZE

*/


template<typename T , unsigned int T_SIZE>
class MyArray
{
public:
	MyArray()
	{
		//length = 0;
		// T ����� ������ ������ ����� �Ҵ���.
		data = new T[T_SIZE];
	}
	~MyArray()
	{
		delete[] data;
	}

	T& operator[](int _index)
	{
		assert(_index >= 0 && _index < T_SIZE);
		return data[_index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << data[i] << " ";
		std::cout << std::endl;
	}

private:
	int length;
	T* data;

};

