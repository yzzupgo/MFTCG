#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200010
#define ff first
#define ss second
signed main() {
ios::sync_with_stdio(0);
cin.tie(0);
int i, j, k, a, b, c, m;
float n;
cin >> n;
if(207.0 - n * 1.08 < 1) {
cout << "so-so";
} else if(n * 1.08 > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}
