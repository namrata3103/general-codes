#include<iostream>
using namespace std;
int main()
{
	int i, n,c=0;
	cout << "Enter any no: ";
	cin >> n;
	for (i =2 ;i < n; i++)
	{
		if (n % i == 0)
			c = 1;
	}
	if(c==1)
		cout << "Not prime";
	else
		cout << "Prime";
}
