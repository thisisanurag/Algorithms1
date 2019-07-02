#include<iostream>
using namespace std;
const int n=6;
int c;
void nq(int q[n][n], int col);
bool checkqueen (int row, int col, int q[n][n]);
bool checkqueen(int row,int col, int q[n][n])
{
for (int i=col-1;i>=0;i--)
{
	if(q[row][i]==1)
	{
		return false;
	}
}
for (int i=row-1, j=col-1;i>=0 && j>=0;i--,j--)
{
	if(q[i][j]==1)
	{
		return false;
	}
}
for (int i=row-1, j=col+1;j>=0 && i<n;i++,j--)
{
	if (q[i][j]==1)
	{
		return false;
	}
}
return true;
}
void nq(int q[n][n], int col)
{
	if (col==n)
	{
		c+=1;
		for (int i=0; i<n; i++)
		{
			for (int j=0;j<n;j++)
			{
				cout<<q[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
		return;
	}
	else
	{
		for (int i=0;i<n;i++)
		{
			if(checkqueen(i,col,q))
			{
				q[i][col]=1;
				nq(q,col+1);
				q[i][col]=0;
			}
		}
	}
	return;
}
int main()
{
	int q[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			q[i][j]=0;
		}
	}
	nq(q,0);
	cout<<"Count="<<c;
	return 0;
}
