#include <bits/stdc++.h>
#define debug(a) cout << #a ": " << a << endl
#define IOS ios::sync_with_stdio(false), cin.tie(0)
using namespace std;
typedef long long ll;
int cnt[10];
int main(void){
IOS;
int x, y; cin >> x >> y;
for (int i = 0; i <= x; ++i){
int two = i*2, four = (x-i)*4;
if (two+four == y){
cout << "Yes" << endl; return 0;
}
}
cout << "No" << endl;
return 0;
}
