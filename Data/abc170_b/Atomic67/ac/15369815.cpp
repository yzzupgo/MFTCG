#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool ret = false;
for(int i = 0; i <= x; i++) {
int t = x - i;
int total = 2*i + 4*t;
if(total == y) ret = true;
}
if(ret) cout << "Yes" << endl;
else cout << "No" << endl;
}
