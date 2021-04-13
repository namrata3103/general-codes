#include<iostream>
using namespace std;
int main()
{
	int i, n, c,s,t;
	cout << "Enter number of terms to print in FIBONACCI SERIES: ";
		cin >> n;
	cout << endl;
	c = 0;
	t = 1;
	cout << c << " " << t<<" ";
	for (i = 1; i <= n-2; i++)
	{
		s = c+t;
			cout << s <<" ";
			c = t;
			t = s;
	}
	
}
