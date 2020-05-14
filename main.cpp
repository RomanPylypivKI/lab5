#include<iostream>
#include<math.h>
#include"Soldier.h"
using namespace std;

int main(void)
{
	double n = 0;
	CSoldier name(n);
	CSoldier num(n);
	CSoldier en(n);
	CSoldier time(n);
	double ser, war;
	cout << "Enter soldier name: " << endl;
	name.name(n);
	cout << "The part number in which it serves" << endl;
	num.num(n);
	cout << "Number of participation in wars" << endl;
	cin >> war;
	cout << "The number of enemies destroyed" << endl;
	en.en(n);
	cout << "Service life" << endl;
	time.time(n);
	cout << "Combat experience" << endl;
	cin >> ser;
	CSoldier rank(war, ser);
	cout << "Rank" << endl << rank.rank();
}