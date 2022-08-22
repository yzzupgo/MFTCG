#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll x,y;
cin>>x>>y;
if((y>=2*x)&&(4*x>=y)&&((4*x-y)%2==0)&&((y-2*x)%2==0)) cout<<"Yes";
else cout<<"No";
return 0;
}
