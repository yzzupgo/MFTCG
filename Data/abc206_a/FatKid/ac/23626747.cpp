#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
int v = n * 108;
if(v / 100 < 206) {
cout << "Yay!";
} else if(v / 100 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
