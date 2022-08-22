#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
#include <complex>
#define FIXED_FLOAT(x) std::fixed <<std::setprecision(7)<<(x)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
typedef pair<int, int> pairs;
typedef complex<ll> G;
const int N = 1e5+5;
void solve(){
int a, b;
cin >> a >> b;
if(b > a*4 || b < a*2)cout << "No";
else if(b%2==1)cout << "No";
else cout << "Yes";
}
int main() {
fast;
solve();
}
