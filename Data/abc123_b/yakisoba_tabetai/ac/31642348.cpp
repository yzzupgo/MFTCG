#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
  int ans=0;
  int k=0;
  for(int i=0;i<5;i++){
    int x;
    cin>>x;   
    k=max(k,(10-x%10)%10);
    ans+=int((x+9)/10)*10;
  }
  cout<<ans-k<<endl;
}