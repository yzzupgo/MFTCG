#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define x first
#define y second
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll x,y;
cin>>x>>y;
int i;
for(i=0;i<=x;i++){
ll val;
val=i*2;
val+=(x-i)*4;
if(val==y){
cout<<"Yes";
exit(0);
}
}
cout<<"No";
return 0;
}
