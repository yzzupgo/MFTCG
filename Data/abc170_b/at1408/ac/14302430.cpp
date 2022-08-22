#include <bits/stdc++.h>
#define ff { ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
typedef long long ll;
ll pp=1e9+7;
double pi=3.141592653589793238;
int main() {
ff;
ll x,y;
cin>>x>>y;
ll f=0;
for(int i=0;i<=x;i++){
ll z=y-2*i;
if((x-i)*4==z){
f=1;
cout<<"Yes"<<endl;
break;
}
}
if(f==0)cout<<"No"<<endl;
return 0;
}
