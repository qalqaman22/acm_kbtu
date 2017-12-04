#include <iostream>
#include <fstream>
using namespace std;
int main(){

freopen("dijkstra.in","r",stdin);
freopen("dijkstra.out","w",stdout);

int n,s,f,q,inf = 1000000000,x,y,z;
cin>>n>>s>>f;
int a[n+1][n+1];
int d[n+1],used[n+1],out[n+1];
//stack<int> st;

for(int i=0;i<=n;i++)
{
	d[i]=inf;
	used[i]=0;
	out[i]=0;
	for(int j=0;j<=n;j++)
	{
		if(i==0 || j==0)
			a[i][j]=0;			
		else
			cin>>a[i][j];
	}
}

d[s]=0;

for(int i=1;i<=n;i++)
{
	int v=-1;
	for(int j=1;j<=n;j++)
	{
		if(used[j]==0 && (v==-1 || d[j]<d[v]))
			v=j;
	}
	
	if(d[v]==inf)
		break;
	
	used[v]=true;
	
	for(int k=1;k<=n;k++)
	{
		if(d[v]+a[v][k] < d[k] && a[v][k]!=-1)
		{
			d[k] = d[v] + a[v][k];
			
		} 
	}
}

if(d[f]==inf)
{
	cout<<-1;
	return 0;
}

cout<<d[f];

return 0;
}                    