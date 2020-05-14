#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class CSoldier
{
private:
	double war;
	double ser;
	int* ptr;
	int size; 
public:
	CSoldier(double l = 1, double w = 1);
	CSoldier(const CSoldier& rect);
	virtual ~CSoldier();

	double rank();
	void name(double);
	void num(double);
	void en(double);
	void time(double);

	CSoldier(int s = 10);
	CSoldier(CSoldier& arr);
	friend ostream& operator<< (ostream& output, CSoldier& arr);
	void Randomize(int num = 10);
	CSoldier& operator= (CSoldier& arr);
	CSoldier& operator+= (CSoldier& arr);
	CSoldier operator% (CSoldier& arr);
	CSoldier& operator== (CSoldier& arr);
	CSoldier operator!();
};