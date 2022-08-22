#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;
const int inf=(1<<30);
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,a,n) for(int i=(a-1);i>=n;i--)
int main(){
ll a,b;
cin>>a>>b;
rep(i,1,a+1){
if(2*i+4*(a-i)==b){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
