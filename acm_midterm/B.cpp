#include <iostream>
#include <stack>
using namespace std;
int main(){

for(;;)
{
int n;
cin>>n;
if(n==0)
	return 0;
int a[n];
stack<int> st1,st2;
int cnt=1;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=n-1;i>=0;i--)
{
	st1.push(a[i]);	
}
st2.push(-1);

for(;;)
{
	if(st1.empty() && st2.top()==-1)
	{
		cout<<"yes"<<endl;
		break;
	}
	else if(!st1.empty())
	{
		if(st1.top()==cnt)
		{
			st1.pop();
			cnt++;
		}
		else if(st2.top()==cnt)
		{
			st2.pop();
			cnt++;
		}
		else
		{
			st2.push(st1.top());
			st1.pop();
		}
	}
	else if(st2.top()==cnt)
	{
		st2.pop();
		cnt++;
	}
	else if(st2.top()!=cnt)
	{
		cout<<"no"<<endl;
		break;
	}
}
}

return 0;
}