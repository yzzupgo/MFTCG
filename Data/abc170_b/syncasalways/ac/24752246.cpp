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
int check = 0;
for(int i = 0;i<=x;i++){
if(i*4 + (x-i)*2 == y)check = 1;
}
if(check)puts("Yes");
else puts("No");
}
