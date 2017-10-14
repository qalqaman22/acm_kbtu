#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main(){
int n;
cin>>n;        
int x=0,y=0,cnt=1,s,ans=0;
string str1,str2;
stack<char> st;
for(int i=0;i<n;i++)
{
cin>>str1;
for(int i=str1.size()-1;i>=0;i--)
{
	st.push(str1[i]);
}
cnt=1;
while(!st.empty())
{
	x+=(st.top()-48)*cnt;
	cnt*=10;
	st.pop();		
}
cin>>str2;
for(int i=str2.size()-1;i>=0;i--)
{
	st.push(str2[i]);
}
cnt=1;
while(!st.empty())
{
	y+=(st.top()-48)*cnt;
	cnt*=10;
	st.pop();		
}
s=x+y;
stringstream ss;
ss<<s;
cnt=1;
for(int i=0;i<ss.str().size();i++)
{
	ans+=(ss.str()[i]-48)*cnt;
	cnt*=10;
}
cout<<ans<<endl;
ans=0;
x=0;
y=0;
}


return 0;
}