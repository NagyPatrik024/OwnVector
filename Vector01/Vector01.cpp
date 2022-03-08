#include "vector.h"

#include <iostream>

int main()
{
	oe::vector<int> v1;
	oe::vector<bool> v2;

	oe::vector<int> v3(5); // 5 elem
	//oe::vector<int> v4(10, 8); //10 elem 8-asokkal
	//oe::vector<int> v5({ 3,4,5,8,10 });

	//oe::vector<int> v6 = v3; // copy constructor
	//v5 = v4;

	//v1.push_back(13);
	//for (size_t i = 0; i < v4.size(); ++i)
	//{
	//	v[4] = i + 4;
	//}

	//oe::vector<int>::iterator it = v5.begin();
	//for (oe::vector<int>::iterator it = v4.begin(); it != v.end(); ++it)
	//{
	//	std::cout << *it << std:endl;
	//}

	//for (const auto& e : v4) {
	//	std::cout << e << std::endl;
	//}
}
