#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
int x, y;
cin >> x >> y;
int flag = 0;
for(int i = 0; i <= 500; i++){
for(int j = 0; j <= 500; j++){
int xx = i, yy = j;
int tot = (2*xx) + (4*yy);
if(tot == y) flag = 1;
}
}
if(y%2) flag = 0;
if(flag) cout << "Yes" << "\n";
else cout << "No" << "\n";
}
int main()
{
int tc = 1;
while(tc--) solve();
return 0;
}
