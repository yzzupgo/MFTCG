#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;
string solve(){
ll x,y;
cin>>x>>y;
if((y-(2*x))%2==0 and y-(2*x)>=0 and ((4*x)-y)%2==0 and (4*x)-y>=0) return "Yes";
return "No";
}
int main() {
cout<<setprecision(50);
ios::sync_with_stdio(0);
cin.tie(0);
string ans=solve();
cout<<ans<<endl;
return 0;
}
