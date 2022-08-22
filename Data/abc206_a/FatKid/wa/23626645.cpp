#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
double n;
cin >> n;
if(floor(1.08 * n) < 206) {
cout << "Yay!";
} else if(floor(1.08)*n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
