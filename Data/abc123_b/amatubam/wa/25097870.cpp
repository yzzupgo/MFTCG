#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for(int i = init; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define chmax(a, b) a = a < b ? b : a
#define chmin(a, b) a = a > b ? b : a
#define ll long long
#define mod 998244353
#define INF 1020304050
void print_vec_v(vector<int> v){for(auto e:v)cout<<e<<endl;}
void print_vec(vector<int> v){for(auto i=v.begin();i!=v.end();++i)cout<<*i<<(i!=v.end()-1?" ":"\n");}
void print_mat(vector<vector<int>> m){for(auto e:m)print_vec(e);}

int main() {
  vector<int> a(5); rep(i,5) cin >> a[i];
  int d = 9;
  rep(i,5){
    d = min(d, (a[i]-1)%10+1);
  }
  int sum = d - 10;
  rep(i,5){
    sum += a[i] % 10 == 0 ? a[i] : ((a[i] / 10) + 1) * 10;
  }

  cout << sum << endl;

}//endmmain