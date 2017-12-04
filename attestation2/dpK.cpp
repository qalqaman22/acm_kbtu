#include <iostream>
#include <fstream>
using namespace std;
int main(){

freopen("joseph.in","r",stdin);
freopen("joseph.out","w",stdout);

int n,k,res=0;
cin>>n>>k;

for(int i=1;i<=n;i++)
{
	res=(res+k)%i;
}

cout<<res+1;

return 0;
}