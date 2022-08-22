#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#else
#endif
int n,m;
cin>>n>>m;
for(int i=0;i<=50&&i*2<=50;i++){
if(i*2+(n-i)*4==m){
cout<<"Yes";
return 0;
}
}
cout<<"NO";
}
