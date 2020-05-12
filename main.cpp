#include "Array.h"

int main(void)
{
	Array a(5);
	a.Randomize(5);
	Array b(5);
	b.Randomize(6);
	Array c(5);
	Array d(5);
	cout << "Array a: " << endl << a;
	cout << "Array b: " << endl << b;
	c = a;
	d = b;
	d.operator+=(c);
	cout << d;
	c = a;
	d = b;
	d.operator%(c);
	cout << d;
	c = a;
	d = b;
	d.operator==(c);
	cout << d;
	c.Randomize(2);
	cout << "Array c: " << endl << c;
	c.operator!();
	cout << c;
	return 0;
}