#include <iostream>
#include <stack>
using namespace std;
int main(){

int n,k;
cin>>n>>k;
int a[n];
stack<int> s1,s2;
long long f=1;

for(int i=n-1;i>=0;i--)
{
	cin>>a[i];
}

for(int i=0;i<n;i++)
{
	if(s1.empty())
	{
		s1.push(a[i]);
		s2.push(i);
	}
	else
	{
		while(!s1.empty())
		{
			if(a[i]>s1.top())
			{
				f=(f*(i-s2.top()+1))%1000000007;
				break;
			}
			s1.pop();
			s2.pop();
		}
		s1.push(a[i]);
		s2.push(i);
	}	
}

cout<<f;

return 0;
}