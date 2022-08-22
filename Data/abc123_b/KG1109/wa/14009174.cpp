#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
int64_t MOD=1000000007;

int main() {
  int ans=0;
  vector<int> S(5);
  for(int i=0;i<5;i++){
    int a;
    cin>>a;
    S.at(i)=(a%10);
    a+=10-(a%10);
    ans+=a;
    a%=10;
  }
  sort(S.begin(),S.end());
  cout<<ans-S.at(4);
}
