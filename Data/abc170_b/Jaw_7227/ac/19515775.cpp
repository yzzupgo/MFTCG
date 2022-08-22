#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MOD 1000000007
void solve(int T)
{
int x , y;
cin >> x >> y;
int Y = y/2-x;
int X =2*x -y/2;
if(X>=0 && Y>=0 && X+Y==x && 2*X+4*Y==y){
cout <<"Yes"<<endl;
return;
}
cout <<"No"<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("error.out", "w", stderr);
freopen("outputf.out", "w", stdout);
#endif
int T = 1;
for (int t=1;t<=T; t++) {
solve(t);
}
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
