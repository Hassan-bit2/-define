// Functions(CS201)
#include <iostream>// #include is also a header file
#define pi 3.1415926// #define is a header file
using namespace std;

CirArea(int r)
{
//	x = pi*r*r
	cout << "Area of a circle is:\n" << pi*r*r;
}

int main()
{
	int r;
	cout << "Please enter the radius of the circle" << endl;
	cin >> r;
	CirArea(r);
}
