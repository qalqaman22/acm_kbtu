#include <iostream>
#include <fstream>
using namespace std;
int main(){

freopen("longpath.in","r",stdin);
freopen("longpath.out","w",stdout);

int n,m,x,y;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++)
{
	a[i]=1;
}

for(int i=0;i<m;i++)
{
	cin>>x>>y;
	a[y-1]=max(a[y-1]-1,a[x-1])+1;
}

int ans=0;

for(int i=0;i<n;i++)
{
	if(a[i]>ans)
		ans=a[i];
}

cout<<ans-1;

return 0;
}