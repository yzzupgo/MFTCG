#include<bits/stdc++.h>
#define int long long
using namespace std;
int const MAXN = 2e5 + 20;
signed main() {
int n;
cin >> n;
double ans = 0;
ans = n * 1.0 * 1.08;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
