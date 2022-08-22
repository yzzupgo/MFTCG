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
if(y>=2*x && (y-2*x)%2==0 && x>=(y-2*x)/2) cout<<"YES\n";
else cout<<"NO";
}
return 0;
}
