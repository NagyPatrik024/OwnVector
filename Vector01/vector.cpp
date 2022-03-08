#include "vector.h"

namespace oe {

	template<typename T> 
	vector<T>::vector(const size_t size)
		: mData(new T[size])
		, mSize(size)
		, mCapacity(size)
	{

	}



}