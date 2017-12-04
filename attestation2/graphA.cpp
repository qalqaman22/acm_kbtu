#include <iostream>
#include <fstream>
using namespace std;
int main(){

freopen("floyd.in","r",stdin);
freopen("floyd.out","w",stdout);

int n;
cin>>n;
int a[n][n];

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
	}
}

for (int k=0; k<n; ++k)
{
	for (int i=0; i<n; ++i)
	{
		for (int j=0; j<n; ++j)
		{
			a[i][j] = min (a[i][j], a[i][k] + a[k][j]);
		}
	}
}

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

return 0;
}