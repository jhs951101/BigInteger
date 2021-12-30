#include "BigInteger.h"
#include<iostream>

void testBigInteger()
{
	BigInteger a, b, c;

	cin >> a;
	cin >> b;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "a + b = " << (a + b) << endl;
	cout << "a - b = " << (a - b) << endl;
	cout << "a * b = " << (a * b) << endl;
	cout << "++a = " << (++a) << endl;
	
	cin >> c;
	cout << "c: " << c << endl;
	cout << "pow(c, 100) = " << pow(c, 100) << endl;

	BigInteger d = 99915;
	BigInteger e = 99889;
	BigInteger f = 999999;

	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	cout << "d + e= " << (d + e) << endl;
	cout << "d - e = " << (d - e) << endl;
	cout << "d * e = " << (d * e) << endl;
	cout << "++f = " << (++f) << endl;
}


int main()
{
	testBigInteger();
}