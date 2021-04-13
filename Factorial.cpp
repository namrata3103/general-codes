#include<iostream>
using namespace std;
int main()
{
	double i, n, c = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		c = c * i;
	}
	cout << c;
}
