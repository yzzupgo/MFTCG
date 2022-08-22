#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define REP(i,l,n) for(int i=(l), i ##_len=(n); i<i ##_len; ++i)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back
ll gcd(ll a, ll b) {
return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
template<class T>inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
template<class T>inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char Alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main() {
int n;
cin >> n;
if((int)n * 1.08 < 206) {
cout << "Yay!" << endl;
} else if((int)n * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
