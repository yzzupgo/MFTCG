#include <bits/stdc++.h>
using namespace std;
#define test(t) int t; cin>>t; while(t--)
#define p1(x) { cout << " [" << #x << ": " << x << "]\n"; }
#define p2(x) { cout << " [" << #x << ": "; for(auto it:x) cout << it << " "; cout << "]\n"; }
void solve()
{
int x, y;
cin>>x>>y;
int a=(4*x-y)/2, b=(y-2*x)/2;
if((a<0 || b<0) || (a==0 && b==0)) {
cout<<"No"<<endl;
exit(0);
}
cout<<"Yes"<<endl;
}
int main() {
solve();
return 0;
}
