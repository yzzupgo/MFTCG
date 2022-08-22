#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> vec(5);
  vector<int> x(5);
  int a=1e8;
  int ans=0;
  for(int i=0;i<5;i++){
    cin>>vec[i];
    if(vec[i]%10==0) ans+=vec[i];
    else{
      ans+=vec[i]+10-vec[i]%10;
      a=min(a,vec[i]%10);
    }
  }
  cout<<ans-(10-a)<<endl;
}