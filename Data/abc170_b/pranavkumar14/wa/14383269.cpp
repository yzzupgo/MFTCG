#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repn(i,a,b) for (int i = a; i >=b ;i--)
#define MOD 1000000007
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;cin>>x>>y;
int tmp1=0,tmp2=0;
bool flag=1;
if((y-2*x)>=0&&(y-2*x)%2==0){
tmp1=(y-2*x)/2;
}
else {
flag=0;
cout<<"NO\n";
}
if(flag==1){
tmp2=x-tmp1;
if(2*tmp2+4*tmp1==y&&tmp1>=0&&tmp2>=0)cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}
