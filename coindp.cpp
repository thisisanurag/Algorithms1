#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter values for n and m \n";
	cin>>n>>m;
	int coin[m];
	int a[n+1];
	cout<<"Enter the coins\n";
	for (int i=0;i<m;i++)
	{
		cin>>coin[i];
	}
	for ( int i=0;i<=n;i++)
	{
		a[i]=0;
	}
	a[0]=1;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<=n;j++)
		{
			if (j-coin[i]>=0)
			{
				a[j]=a[j-coin[i]]+a[j];
			}
		}
	}
	for (int i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n"<<a[n]<<"\n";
	return 0;
}
