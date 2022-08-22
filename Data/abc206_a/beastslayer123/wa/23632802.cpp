#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
double n;
cin >> n;
if(n * 1.08 == 206.00) {
cout << "so-so" << endl;
} else if(n * 1.08 < 206.00) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
