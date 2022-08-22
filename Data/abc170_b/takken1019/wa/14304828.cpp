#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
for (int i = 0; i < y / 4 + 1; i++) {
if (i * 4 + (x - i) * 2 == y) {
cout << "YES";
return 0;
}
}
cout << "NO";
return 0;
}
