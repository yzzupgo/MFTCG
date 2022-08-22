#include<bits/stdc++.h>
using namespace std;
int a, b;
int main() {
cin >> a >> b;
if (a >= 6) cout << b << "\n";
else if (a >= 5) cout << b / 2 << "\n";
else cout << "0\n";
return 0;
}
