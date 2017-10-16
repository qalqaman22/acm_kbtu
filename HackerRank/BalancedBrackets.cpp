#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
	char stack[100100];
    	int size=0;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++)
   	{
		if((stack[size-1]=='(' && s[i]==')') || (stack[size-1]=='[' && s[i]==']') || (stack[size-1]=='{' && s[i]=='}'))
			size--;
		else
		{
			stack[size]=s[i];
			size++;
	  	}	
    	}
	if(size==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

    }
    return 0;
}