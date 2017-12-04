#include <iostream>
#include <fstream>
using namespace std;

int main(){

freopen("knight.in","r",stdin);
freopen("knight.out","w",stdout);

int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		a[i][j]=0;
	}
}
a[0][0]=1;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i-2>=0 && j-1>=0)
		{
			a[i][j]+=a[i-2][j-1];
		}
		if(i-1>=0 && j-2>=0)
		{
			a[i][j]+=a[i-1][j-2];
		}
	}
}

cout<<a[n-1][m-1];

return 0;
}