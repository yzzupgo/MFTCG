#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
const int mod = 1000000007;
const int INF =1e9+1;
int main() {
int x,y;cin>>x>>y;
for(int i=0;i<=x;i++){
if(i*2+(x-i)*4==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
