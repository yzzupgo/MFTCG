#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long mainasu,k;
  vector<long> vec(5);
  for(long i=0; i<5; i++){
  	cin>>vec.at(i);
  }
  mainasu=0;
  long ans=0;
  for(long i=0; i<5; i++){
    
 	 if(vec.at(i)%10>0){
    	k=10-vec.at(i)%10;
    	mainasu=max(k,mainasu);
       vec.at(i)=vec.at(i)+k;
  }
    ans=ans+vec.at(i);
  }
  cout<<ans;
}