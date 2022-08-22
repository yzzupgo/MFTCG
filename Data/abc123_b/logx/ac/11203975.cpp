
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep2(i, s, n) for (ll i = s; i < (ll)(n); i++)
typedef long long ll;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<vector<char>> vvc;
typedef vector<char> vc;

int main() {
  int MIN=10;
  int ans=0;
  rep(i,5){
    int t;
    cin >> t;
    if(t%10<MIN&&t%10!=0)MIN=t%10;
    ans+=(t+9)/10 *10;
  }
  cout << ans-10+MIN << endl;
}