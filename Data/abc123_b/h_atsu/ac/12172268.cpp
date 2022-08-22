#include <algorithm>
#include <bitset>
#include <cmath>
#include <ctime>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(a) begin(a),end(a)
typedef long long ll;
typedef pair<int,int> P;
const int inf=1e+9;
const ll mod=1000000007;
const double PI=3.14159265358979323846;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
ll gcd(ll a, ll b){
  if (b==0) return a;
  else return gcd(b,a%b);
}
int cans(bool f){
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}




int main() {
  int ans = 0;
  int dig = 10;
  rep(i,5) {
    int t;
    cin >> t;
    if(t % 10 == 0) {
      ans += t;
    }
    else {
      int m = t%10;
      dig = min(m,dig);
      ans += t - m + 10;
    }
  }
  if(dig != 10) cout << ans - (10 - dig)  << endl;
  else cout << ans << endl;
}
