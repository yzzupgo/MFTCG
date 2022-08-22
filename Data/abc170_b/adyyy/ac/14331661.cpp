#include<bits/stdc++.h>
using namespace std;
#define ll int
#define nl endl
#define pi 3.14159265358979323846
#define ff first
#define ss second
#define pb push_back
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<nl;
const int N=200100;
vector<int> v;
int main(){
ll t=1;
while(t--){
ll x,y;
scanf("%d%d",&x,&y);
for(int i=0;i<300;i++){
for(int j=0;j<300;j++) {
if(( i+j==x )&& (2*i+4*j==y )) { cout<<"Yes"; return 0;}
}
}
cout<<"No";
}
return 0;
}
