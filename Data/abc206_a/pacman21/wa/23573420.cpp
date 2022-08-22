#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
n = (n * 108) / 100;
if(n < 206) {
cout << "Yey!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(";
}
}
