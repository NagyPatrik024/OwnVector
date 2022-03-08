#include "vector.h"

#include <iostream>

int main()
{
	oe::vector<int> v1;
	//oe::vector<bool> v2;

	oe::vector<int> v3(5); // 5 elem
	oe::vector<int> v4(10, 8); //10 elem 8-asokkal

	oe::vector<int> v6 = v3; // copy constructor
	v3 = v4; // copy assigment operator

	v1.push_back(13);
	v1.push_back(15);
	v1.push_back(17);

	for (size_t i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << std::endl;
	}

	/*for (size_t i = 0; i < v4.size(); ++i)
	{
		v4[i] = i + 4;
	}

	for (size_t i = 0; i < v4.size(); i++)
	{
		std::cout << v4[i] << std::endl;
	}*/

	for (oe::vector<int>::iterator it = v4.begin(); it != v4.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	for (const auto& e : v4) {
		std::cout << e << std::endl;
	}
}
