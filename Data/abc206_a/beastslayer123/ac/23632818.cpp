#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
int n;
cin >> n;
if((int)(n * 1.08) == 206) {
cout << "so-so" << endl;
} else if((int)(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
