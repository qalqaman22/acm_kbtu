#include <iostream>
#include <stack>
using namespace std;

int main(){

int n,k,x;
stack<string> st;
string str="";
string temp;
st.push(str);
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>k;
	if(k==1)
	{
		cin>>temp;
		str+=temp;
		st.push(str);
	}
	else if(k==2)
	{
	        temp="";
		cin>>x;
		for(int i=0;i<str.size()-x;i++)
			temp+=str[i];	
		str=temp;
		st.push(str);
	}
	else if(k==3)
	{
		cin>>x;
		cout<<str[x-1]<<endl;	
	}
	else if(k==4)
	{
		st.pop();
		str=st.top();	
	}
}


return 0;
}