#include "MyArray.h"

int main()
{
	// std::vector<double> my_array;	my_array.resize(100);
	// MyArray<double> my_array(100);

	/*
		������ �ϱ� ���� �����Ͱ� ������ �Ǿ�� �Ѵ�.
	*/

	const int i = 100;
	MyArray<double, i> my_array;

	for (int i = 0; i < my_array.getLength(); i++)
	{
		my_array[i] = i + 65;
	}

	my_array.print();

	return 0;

}
