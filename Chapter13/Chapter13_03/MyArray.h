#pragma once
#include <assert.h>
#include <iostream>

/*
	논타입 파라미터를 사용할 경우 헤더에 다 정의해 놓은것이 좋다.

	unsigned int T_SIZE

*/


template<typename T , unsigned int T_SIZE>
class MyArray
{
public:
	MyArray()
	{
		//length = 0;
		// T 사이즈가 컴파일 시점에 사이즈가 할당됬다.
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

