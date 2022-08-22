#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
ll x,y;
cin>>x>>y;
if(2*x<=y&&4*x>=y&&y%2==0)cout<<"Yes";
else cout<<"No";
return 0;
}
