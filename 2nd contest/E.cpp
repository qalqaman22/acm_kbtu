#include <iostream>
using namespace std;

int main(){
char stack[200000];

string s;
cin>>s;
int size=1;
stack[0]=s[0];

for(int i=1;i<s.size();i++)
{
	if(stack[size-1]==s[i])
		size--;
	else
	{
		stack[size]=s[i];
		size++;	
	}
}

for(int i=0;i<size;i++)
	cout<<stack[i];

return 0;
}