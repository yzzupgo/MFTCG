#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++) {
for(int j = 0; j <= x-i; j++) {
if(y == 2*i + 4*j){
cout << "Yes\n";
return 0;
}
}
}
cout << "No\n";
return 0;
}
