#include "Soldier.h"
#include <math.h>
#include <iostream>
using namespace std;
CSoldier::CSoldier(double l, double w)
{
	war = l;
	ser = w;
}
CSoldier::CSoldier(const CSoldier& rect)
{
	war = rect.war;
	ser = rect.ser;
}
CSoldier::~CSoldier()
{
	delete[] ptr;
	cout << "Destructor" << endl;
}
double CSoldier::rank()
{
	return int((ser + pow(war, 5)) / 50);
}
void CSoldier::name(double x)
{
	string n;
	cin >> n;
}
void CSoldier::num(double x)
{
	cin >> x;
}
void CSoldier::en(double x)
{
	cin >> x;
}
void CSoldier::time(double x)
{
	cin >> x;
}

CSoldier::CSoldier(int s)
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
CSoldier::CSoldier(CSoldier& arr)
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
void CSoldier::Randomize(int num)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % num;
	}
}
//----------------------------------------------------------------------
ostream& operator<< (ostream& output, CSoldier& arr)
{
	for (int i = 0; i < arr.size; i++)
	{
		output << arr.ptr[i] << " ";
	}
	output << endl;
	return output;
}
//----------------------------------------------------------------------
CSoldier& CSoldier::operator= (CSoldier& arr)
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
CSoldier& CSoldier::operator+= (CSoldier& arr)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = ptr[i] + arr.ptr[i];
	}
	cout << "Operation += : " << endl;
	return *this;
}
//----------------------------------------------------------------------
CSoldier CSoldier::operator%(CSoldier& arr)
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
CSoldier& CSoldier::operator==(CSoldier& arr)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr.ptr[i];
	}
	cout << "Operation == :" << endl;
	return *this;
}
//----------------------------------------------------------------------
CSoldier CSoldier::operator!()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = !ptr[i];
	}
	cout << "Operation ! : " << endl;
	return *this;
}