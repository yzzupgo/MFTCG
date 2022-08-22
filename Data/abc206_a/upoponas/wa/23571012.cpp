#include <math.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,l,n) for (int i = (l); i < (n); i++)
#define max(p,q) ((p) > (q) ? (p) : (q))
#define min(p,q) ((p) < (q) ? (p) : (q))
using ll = long long;
using P = pair<int, int>;
template <class T>
using V = vector<T>;
template <class T>
using VV = V<V<T> >;
const ll INF = 1e18 + 1;
const ll mod = 1000000007;
int main() {
int n;
cin >> n;
int ans = n * 1.08;
if(ans > 206) {
cout << "Yay !" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
