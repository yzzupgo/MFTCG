#include"bits/stdc++.h"
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
template<typename T>
T gcd(T a, T b) {
if (a % b == 0) {
return(b);
}
else {
return(gcd(b, a % b));
}
}
template<typename T>
T lcm(T a, T b) {
return a / gcd(a, b) * b;
}
int main(void) {
int n, m;
cin >> n>>m;
int max = 4 * n;
int min = 2 * n;
if (min <= m && m <= max&&m%2==0) {
cout << "Yes";
}
else {
cout << "No";
}
}
