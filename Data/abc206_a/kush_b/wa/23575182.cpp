#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define endl "\n"
#define ll long long
#define ld long double
#define pb(a) push_back(a)
#define arr(a) new ll int[a]
#define INF 100000000000000000
#define MOD 1000000007
#define MOD1 998244353
#define MOD2 999979621
#define arr1(a) new arra[a]
#define str(a) new string[a]
#define all(v) v.begin(),v.end()
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define PI 3.14159265
#define oset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<bool> vb;
void yes() {
cout << "YES" << endl;
}
void no() {
cout << "NO" << endl;
}
struct arra {
int l, r;
} arr1[5001];
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin >> n;
ld r = (n + 0.0) * 1.08;
ll res = r;
if(res < 206) {
cout << "Yay";
} else if(res > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
