#include <iostream>
#include <fstream>
using namespace std;

int a[1111];
int b[1111];

int main(){

freopen("longpath.in","r",stdin);
freopen("longpath.out","w",stdout);

int n;
cin>>n;
string str;
cin>>str;
for(int i=0;i<n;i++)
{
	if(str[i]=='.')
		a[i]=0;
	else if(str[i]=='"')
		a[i]=1;
	else
		a[i]=-1;
}

for(int i=0;i<n-1;i++)
{
	if(a[i]==1)
	{
		b[i]++;
	}
	
	if((a[i+1]==-1) && (a[i+3]==-1 || i+3>=n) && (a[i+5]==-1 || i+5>=n))
	{
		cout<<-1;
		return 0;
	}
	
	if(a[i+1]!=-1)
	{
		b[i+1]=max(b[i+1],b[i]);
	}
	if(a[i+3]!=-1)
	{
		b[i+3]=max(b[i+3],b[i]);
	}
	if(a[i+5]!=-1)
	{
		b[i+5]=max(b[i+5],b[i]);
	}
}

cout<<b[n-1];

return 0;
}