#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){

freopen("inverse.in","r",stdin);
freopen("inverse.out","w",stdout);

int n;
cin>>n;
int a[n],b[n];

for(int i=0;i<n;i++)
{                 
	cin>>a[i];
	b[i]=0;
}

for(int i=0;i<n;i++)
{
	b[a[i]-1]=i+1;
}


for(int i=0;i<n;i++)
{
	cout<<b[i]<<" ";
}


return 0;
}           