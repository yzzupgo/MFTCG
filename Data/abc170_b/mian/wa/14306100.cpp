#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int x,y;
cin >> x >> y;
string ans = "No";
if((y-2*x)%2==0 && (y-2*x)/2 <= x) ans = "Yes";
cout << ans << endl;
return 0;
}
