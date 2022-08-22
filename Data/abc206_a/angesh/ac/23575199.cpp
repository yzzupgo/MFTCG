#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T = 1;
while(T--) {
int n;
cin >> n;
n = (n * 108) / 100;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
return 0;
}
