#include <bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; ++i)
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
if(pow(4,x) == y || pow(2, x) == y) {
cout << "YES";
}
else {
cout << "NO";
}
cout << "\n";
return 0;
}
