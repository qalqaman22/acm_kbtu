#include <iostream>
#include <fstream>
using namespace std;
int main(){

freopen("distance.in","r",stdin);
freopen("distance.out","w",stdout);

int n,m,s,f,q,inf = 1000000000,x,y,z;
cin>>n>>m>>s>>f;
int a[n+1][n+1];
int d[n+1],used[n+1],p[n+1],out[n+1];
//stack<int> st;

for(int i=0;i<=n;i++)
{
	d[i]=inf;
	used[i]=0;
	p[i]=0;
	out[i]=0;
	for(int j=0;j<=n;j++)
	{
		if(i==j)
			a[i][j]=0;
		else
			a[i][j]=-1;
	}
}

for(int i=1;i<=m;i++)
{
	cin>>x>>y>>z;
	a[x][y]=z;
	a[y][x]=z;		
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
			p[k] = v;
		} 
	}
}

if(d[f]==inf)
{
	cout<<-1;
	return 0;
}

cout<<d[f]<<endl;

q=f;       
int cnt=0;

while(true)
{
	out[cnt]=q;
	if(q==s)
		break;
	q=p[q];
	cnt++;
		
}

for(int z=cnt;z>=0;z--)
{
	cout<<out[z]<<" ";
}

return 0;
}                    