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
int t,c;
bool flag=1;
if(y%2==1){
flag=0;
cout<<"NO";
}
if(flag){
c=2*x-y/2;
t=y/2-x;
if(c>=0&&t>=0&&(c+t==x)&&(2*c+4*t==y))cout<<"YES";
else cout<<"NO";
}
return 0;
}
