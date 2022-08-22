#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector <int> vi;
typedef vector <ull> vu;
typedef vector <vector <int>> vvi;
typedef pair <int, int> pi;
typedef vector <pair <int, int>> vpi;

vi v(5);

void read() {
  cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
}

void solve() {
  int cmax = 0, ind = 0;
  for(int i = 0; i < 5; ++i)
    if (v[i] % 10 < cmax) {
      cmax = v[i] % 10;
      ind = i;
    }
  int sol = v[ind];
  for(int i = 0; i < ind; ++i) {
    sol += v[i];
    if (v[i] % 10 != 0)
      sol += 10 - v[i] % 10;
  }
  for(int i = ind + 1; i < 5; ++i) {
    sol += v[i];
    if (v[i] % 10 != 0)
      sol += 10 - v[i] % 10;
  }
  cout << sol;
}

int main() {
  ios :: sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
//  cin >> t; //please do not forget to comment this if there are no queries
  while(t) {
    --t;
    read();
    solve();
  }
  return 0;
}
