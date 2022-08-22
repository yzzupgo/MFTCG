#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define cont continue
#define rep(i,n) for(int i = 0 ; i < (n) ; i++)
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int INF = 987654321;
int T;
map<ll, ll> m;
int main() {
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int x, y;
cin >> x >> y;
bool flag = true;
if(y % 2 == 1) {
flag = false;
}
if(x * 4 < y) {
flag = false;
}
if(flag) cout << "Yes" << endl;
else cout << "No" << endl;
}
