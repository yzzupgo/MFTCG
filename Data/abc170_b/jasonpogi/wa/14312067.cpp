#include <bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; ++i)
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
while(x--) {
y /= 2;
}
if(y <= 1) cout << "Yes";
else cout << "No";
cout << "\n";
return 0;
}
