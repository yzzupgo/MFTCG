#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
template<class T>
inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
template<class T>
inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int A, B;
cin >> A >> B;
if(A<=12) B/=2;
if(B<=5) B=0;
cout << B << endl;
return 0;
}
