#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	for(int mask=0; mask<(1<<n); mask++){
		int sum = 0;
		for(int i=0; i<n; i++){
			if(mask & (1<<i)){
				sum+=a[i];
			}
		}
		cout<<sum<<endl;
		if(sum == x){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
