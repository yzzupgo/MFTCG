#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
int main() {
int n, l;
cin >> n >> l;
int s = 0;
rep(i, n) {
s += l + i;
cout << s << endl;
}
if (l >= 0) s -= l;
else {
if (n+l < 0) s -= n-1+l;
}
cout << s << endl;
return 0;
}
