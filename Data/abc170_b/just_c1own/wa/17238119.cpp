#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
for(int i = 0; i <= x; i++) {
int sum = i*2+(x-i)*4;
if(sum==y) {
cout << "YES";
return 0;
}
}
cout << "NO";
}
