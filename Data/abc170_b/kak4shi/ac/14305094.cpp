#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define ini(a,i) memset(a, i, sizeof(a))
#define contains(c,i) ((c).find(i) != (c).end())
#define present(i,c) (find(all(c), i) != (c).end())
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep1(i,n) for(int i = 1; i <= n; i++)
#define repa(i,a,b) for(int i = (a); i < (b); i++)
#define repd(i,n) for(int i = (n)-1; i >= 0; i--)
#define TRACE(x...) x
#define watch(x) TRACE(cerr << #x" = " << x << endl)
#define watch_all(x) TRACE(cerr << #x" = "; for(auto __i : x) cerr << __i << " "; cerr << endl)
void run_test() {
int x, y; cin >> x >> y;
int a = (4 * x - y) / 2;
int b = x - a;
if(a >= 0 && b >= 0 && 2 * a == 4 * x - y) cout << "Yes" << endl;
else cout << "No" << endl;
}
int main() {
ios::sync_with_stdio(0); cin.tie(0);
run_test();
return 0;
}
