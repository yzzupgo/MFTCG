#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int n;
cin >> n;
if (n <= 9) cout << n << endl;
else if (n <= 99) cout << 9 << endl;
else if (n <= 999) cout << 9 + (n-99) << endl;
else if (n <= 9999) cout << 9 + 900 << endl;
else if (n <= 99999) cout << 9 + 900 + (n-9999) << endl;
else if (n == 100000) cout << 9 + 90900 << endl;
return 0;
}
