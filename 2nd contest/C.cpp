#include <iostream>
#include <stack>
using namespace std;
int main(){

stack<char> st;
string str;
cin>>str;
st.push(str[0]);
for(int i=1;i<str.size();i++)
{
	if(!st.empty() && str[i]==st.top())
	{
		st.pop();
	}
	else
	{
		st.push(str[i]);
	}
}

if(st.empty())
	cout<<"Yes";
else
	cout<<"No";


return 0;
}