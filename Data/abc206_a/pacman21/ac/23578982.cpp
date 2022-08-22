#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
long double n;
cin >> n;
n *= 1.08;
n = floor(n);
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(";
}
}
