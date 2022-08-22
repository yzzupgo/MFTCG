#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef set<int> si;
typedef map<int, int> mi;
#define fst first;
#define scnd second;
#define pb push_back
#define ins insert
#define nl '\n'
#define all(v) (v).begin(), (v).end();
#define allR(v) (v).rbegin(), (v).rend();
#define sorta(v) sort((v).begin(),(v).end());
#define sortd(x) sort((x).rbegin(), (x).rend());
#define loop(i,a,t) for (int (i)=a; (i)<=(t); (i)++)
#define loopr(i,a,b) for (int (i)=a; (i)>=(b); (i)--)
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int inf = 1e9 + 10;
void solve() {
int n;
cin >> n;
int hello_visiter = (108 * n) / 100 ;
if(hello_visiter > 206) {
cout << ":(";
} else if(hello_visiter < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
signed main() {
faster
int t = 1;
while(t--) {
solve();
}
return 0;
}
