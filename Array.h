#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Array
{
private:
	int* ptr;
	int size;
public:
	Array(int s = 10);
	Array(Array& arr);
	virtual ~Array();
	friend ostream& operator<< (ostream& output, Array& arr);
	void Randomize(int num = 10);
	Array& operator= (Array& arr);
	Array& operator+= (Array& arr);
	Array operator% (Array& arr);
	Array& operator== (Array& arr);
	Array operator!();
};