#include <iostream>
using namespace std;

int main(){
char stack[1000001];
int size=0;
string s;
cin>>s;

for(int i=0;i<s.size();i++)
{
	if(stack[size-1]=='(' && s[i]==')')
		size--;
	else
	{
		stack[size]=s[i];
		size++;
	}	
}
cout<<s.size()-size;

return 0;
}