#include "Array.h"
Array::Array(int s)
{
	size = s;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
	cout << "Constructor" << endl;
}
//----------------------------------------------------------------------
Array::Array(Array& arr)
{
	size = arr.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr.ptr[i];
	}
	cout << "Copy Constructor" << endl;
}
//----------------------------------------------------------------------
Array::~Array()
{
	delete[] ptr;
	cout << "Destructor" << endl;
}
//----------------------------------------------------------------------
void Array::Randomize(int num)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % num;
	}
}
//----------------------------------------------------------------------
ostream & operator<< (ostream & output, Array & arr)
{
	for (int i = 0; i < arr.size; i++)
	{
		output << arr.ptr[i] << " ";
	}
	output << endl;
	return output;
}
//----------------------------------------------------------------------
Array& Array::operator= (Array& arr)
{
	if (this != &arr)
	{
		delete[] ptr;
		size = arr.size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
		{
			ptr[i] = arr.ptr[i];
		}
	}
	return *this;
}
//----------------------------------------------------------------------
Array& Array::operator+= (Array& arr)
{
	for (int i = 0; i < size; i++)
	{		
		ptr[i] = ptr[i] + arr.ptr[i];
	}
	cout << "Operation += : " << endl;
	return *this;
}
//----------------------------------------------------------------------
Array Array::operator%(Array& arr)
{
	for (int i = 0; i < size; i++)
	{
		if (arr.ptr[i] != 0)
		{
			ptr[i] = ptr[i] % arr.ptr[i];
		}
		else ptr[i] = 0;
	}
	cout << "Operation % :" << endl;
	return *this;
}
//----------------------------------------------------------------------
Array& Array::operator==(Array& arr)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr.ptr[i];
	}
	cout << "Operation == :" << endl;
	return *this;
}
//----------------------------------------------------------------------
Array Array::operator!()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = !ptr[i];
	}
	cout << "Operation ! : " << endl;
	return *this;
}