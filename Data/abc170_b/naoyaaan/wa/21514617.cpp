#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
int main(){
int x,y,ans;
cin>>x>>y;
rep(i,x){
int num = i+1;
if(2*num + 4*(x-num) == y){
ans++;
break;
}
}
if(ans) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
