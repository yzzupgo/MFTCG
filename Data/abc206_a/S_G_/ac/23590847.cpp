#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(a) for(int i=0;i<(a.size());i++){cout<<a[i]<<"\n";}
#define sortt(a) sort(a.begin(),a.end())
#define rep(i,a,b) for(int i=a;i<b;i++)
#define stp(x) fixed<<setprecision(x)
#define int long long
#define pb push_back
#define pi pair<int,int>
#define PQ priority_queue
#define F first
#define S second
#define mod 1000000007
#define endl "\n"
void solve() {
int n;
cin >> n;
double ans1 = n * 1.08;
int ans = floor(ans1);
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
signed main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
IOS;
int t = 1;
while(t--) {
solve();
}
return 0;
}
