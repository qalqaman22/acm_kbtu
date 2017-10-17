#include <iostream>
#include <cmath>
using namespace std;
int main(){

string str;
cin>>str;
int ans=1;

for(int i=1;i<str.size();i++)
	ans+=pow(2.0,i);

string str2="";
for(int i=0;i<str.size();i++)
{
	if(str[i]=='4')
		str2+='0';
	else
		str2+='1';	
}

int cnt=0;
for(int i=str2.size()-1;i>=0;i--)
{
	ans+=(str2[cnt++]-48)*pow(2.0,i);	
}

cout<<ans;

return 0;
}