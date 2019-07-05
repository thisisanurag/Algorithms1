//fibonacci series nth term starting from 0th term and so on.
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	//fib(n-1)+fib(n-2);
	if (n<0)
	{
		cout<<"negative number!\n";
		return 0;
	}
	int a[n+1];
	a[0]=0;
	a[1]=1;
	for (int i=2;i<=n;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	if (n==0)
	{
		cout<<"Ans="<<0<<"\n";
	}
	else if (n==1)
	{
		cout<<"Ans="<<1<<"\n";
	}
	else
	{
		cout<<"Ans="<<a[n]<<"\n";
	}
	return 0;
}
