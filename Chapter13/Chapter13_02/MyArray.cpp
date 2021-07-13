#include "MyArray.h"

template <typename T>
void MyArray<T>::print()
{
	
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
	
}

// explicit instantiation
//template void MyArray<char>::print();

// 클래스 자체를 explicit instantiation
template class MyArray<int>;