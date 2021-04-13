#include<iostream>
using namespace std;
int main()
{
	double i, n, c = 1;
	cout<<"Enter any number: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		c = c * i;
	}
	cout << Factorial is: "<< c;
}
