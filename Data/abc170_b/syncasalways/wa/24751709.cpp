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
if(x==y)puts("No");
else if(y==x*2 || y==x*4)puts("Yes");
else if(y%2==0 && (y/2)%4==0)puts("Yes");
else if(y%4==0 && (y/4)%2==0)puts("Yes");
else if(y/2>=4 || y/4>=2)puts("Yes");
else puts("No");
}
