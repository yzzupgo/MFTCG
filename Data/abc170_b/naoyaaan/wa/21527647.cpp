#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
int main(){
int x,y,ans;
cin>>x>>y;
for(int i = 0;i<=x;i++){
if(2*i + 4*(x-i) == y){
ans=1;
break;
}
}
if(ans) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
