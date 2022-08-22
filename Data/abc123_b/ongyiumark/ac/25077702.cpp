/*
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int>> piii;

template <typename T>
using ordered_set = __gnu_pbds::tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int ans = 0;
  int minus = 0;
  for (int i = 0; i < 5; i++) {
    int x; cin >> x;
    ans += (x+9)/10*10;
    minus = max(minus, (x+9)/10*10 - x);
  }
  cout << ans-minus << endl;
  return 0;
}
