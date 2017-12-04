#include <iostream>
#include <fstream>
using namespace std;

int main(){

freopen("king2.in","r",stdin);
freopen("king2.out","w",stdout);


int a[10][10];

for(int i=1;i<=8;i++)
{
	for(int j=1;j<=8;j++)
	{
		cin>>a[i][j];
	}
}

for(int i=1;i<=8;i++)
{
	for(int j=8;j>=1;j--)
	{
		if(i-1>=1 && j+1<=8)
			a[i][j]+=min(a[i-1][j],min(a[i-1][j+1],a[i][j+1]));	
		else if(i-1>=1)                                                       
		{                                       
			a[i][j]+=a[i-1][j];	              
		}                                                           
		else if(j+1<=8)                                     
		{                                                
			a[i][j]+=a[i][j+1];                          
		}                                              
	}                                                     
}                                                                
                                                                  
cout<<a[8][1];                                         
                                                      
return 0;                                                     
}                                                                         