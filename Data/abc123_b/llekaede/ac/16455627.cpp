#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> vec(5);
  vector<int> x(5);
  int a=1e8;
  int ans=0;
  int cnt=0;
  for(int i=0;i<5;i++){
    cin>>vec[i];
    if(vec[i]%10==0){
      ans+=vec[i];
      cnt++;
    }
    else{
      ans+=vec[i]+10-vec[i]%10;
      a=min(a,vec[i]%10);
    }
  }
  if(cnt==5) cout<<ans<<endl;
  else cout<<ans-(10-a)<<endl;
}