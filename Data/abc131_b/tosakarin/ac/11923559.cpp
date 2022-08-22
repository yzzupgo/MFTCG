#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,s,n) for(int i = (s); i < (n); i++)
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
ll n, l;
cin >> n >> l;
int x = 10000;
int sum = 0;
rep(i, 1, n+1) {
int aji = l+i-1;
sum += aji;
if(abs(x) > abs(aji))
x = aji;
}
cout << sum-x << "\n";
}
