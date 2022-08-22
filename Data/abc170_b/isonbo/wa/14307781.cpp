#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define INF 1000000000
#define PB push_back
#define MP make_pair
#define F first
#define S second
int main(){
int x,y;
cin>>x>>y;
int t,k;
if((y-2*k)%2==1){
cout<<"No"<<endl;
return 0;
}
k=(y-2*x);
if(k<0 || k>x){
cout<<"No"<<endl;
return 0;
}
cout<<"Yes"<<endl;
return 0;
}
