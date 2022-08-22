#include <bits/stdc++.h>  
using namespace std;
using ll = long long int;
using pii = pair<int, int>;
#define rep(i,n) for(int i=0; i<(int)(n); i++)

int main() {
  vector<int> a(5);
  int ans=0;
  rep(i,5){
    cin>>a.at(i);
    ans+=((a.at(i)/10)+1)*10;
    a.at(i)=a.at(i)%10;
  }
  sort(a.begin(),a.end());
  ans=ans-10+a.at(0);
  cout<<ans;
}
      