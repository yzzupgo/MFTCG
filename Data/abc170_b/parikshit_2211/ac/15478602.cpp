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
long long n,m;
cin>>n>>m;
for(long long i=0;i<=n;i++){
if(i*2+(n-i)*4==m){
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
