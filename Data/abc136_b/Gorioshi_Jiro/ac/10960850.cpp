#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i < (int)(n); i++)
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int n; cin>>n;
int ans;
rep(i,n+1){
if(i<10) ans++;
else if(i<100);
else if(i<1000) ans++;
else if(i<10000);
else if(i<100000) ans++;
}
cout<<ans<<endl;
}
