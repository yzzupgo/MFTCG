#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int x, y;
cin>>x>>y;
if((4*x-y)>=0 && !(y&1) && !((4*x-y)&1) && y>=2*x) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
