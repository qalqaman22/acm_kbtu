#include <iostream>
#include <set>

using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
 
    int k, x;
    for(int i = 0; i < n; i++){
     cin >> k;
     if(k==1){
      cin >> x;
      s.insert(x) ;
     }
     else if(k == 2){
      cin >> x;
      s.erase(x);
     }
     else{
      cout << *s.begin() << "\n"; 
     }

    
    }          

    return 0;
 }