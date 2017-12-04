#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){

freopen("perm.in","r",stdin);
freopen("perm.out","w",stdout);

int n,x=1;
cin>>n;
int a[n];
for(int i=2;i<=n;i++)
{
	x=x*i;	
}
for(int i=0;i<n;i++)
{
	a[i]=i+1;
}

for(int i=0;i<x;i++)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	next_permutation(a,a+n);
}


return 0;
}           