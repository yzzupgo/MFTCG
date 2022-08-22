#include <bits/stdc++.h>
using namespace std;
#define hyperspeed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define ui unsigned int
#define li long int
#define pb push_back
#define ld long double
#define vi vector<int>
#define pi pair<int,int>
#define mp make_pair
const int MOD = 1e9+7;
void solve() {
li x,y;
cin >> x;
cin >> y;
string ans = "No";
for(li i=0;i<=x;i++) {
li b = x - i;
if(((2*i)+(4*b))==y) {
ans = "Yes";
}
}
cout << ans << endl;
}
int32_t main()
{
hyperspeed
int test=1;
while(test--) {
solve();
}
return 0;
}
