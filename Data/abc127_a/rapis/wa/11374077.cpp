#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,ans;
cin >> a >> b;
if(b<=5)cout << 0 << endl;
else if(b>=6 && b<=12)cout << a/2 << endl;
else cout << a << endl;
}
