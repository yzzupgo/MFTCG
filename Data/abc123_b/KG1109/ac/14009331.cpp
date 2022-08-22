#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
int64_t MOD=1000000007;

int main() {
  int ans=0;
  vector<int> S;
  for(int i=0;i<5;i++){
    int a;
    cin>>a;
    if(a%10!=0){
       S.push_back(a%10);
      a+=10-(a%10);
    }
    ans+=a;
    a%=10;
  }
  if(S.size()!=0){
  sort(S.begin(),S.end());
  cout<<ans-10+S.at(0);
  }
  else cout<<ans;
}
