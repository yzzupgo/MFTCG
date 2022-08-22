#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef vector<long long> vi;
typedef long long ll;
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll x,y;cin>>x>>y;
if(y>=2*x && y<=4*x)puts("Yes");
else puts("No");
}
