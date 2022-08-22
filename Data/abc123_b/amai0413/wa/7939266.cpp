#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define repl(i,n) for(int64_t i=0;i<(int64_t)(n);i++)
#define MAX_N 10000000
#define ll int64_t
#define all(v) (v).begin(),(v).end()
#define P pair<int,int>
using namespace std;

int main() {
  vector<P> meal(5);
  rep(i,5) {
    cin>>meal[i].second;
    meal[i].first=(meal[i].second)%10;
    if(meal[i].first==0)
    meal[i].first=10;
  }
  sort(all(meal));
  int count=0;
  for(int i=1;i<5;i++) {
    count+=(meal[i].second/10+1)*10;
  }
  count+=meal[0].second;
  cout<<count<<endl;
  return 0;
}