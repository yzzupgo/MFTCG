#include<bits/stdc++.h>
using namespace std;
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int inf=1e9+7;
int main(){
int n;cin>>n;
int count=0;
if(n<10)count=n;
if(n>=10&&n<100)count=9;
if(n>=100&&n<1000)count=n-99+9;
if(n>=1000&&n<10000)count=909;
if(n>=10000&&n<100000)count=n-9999+909;
else if(n==100000){
count=90909;
}
cout<<count<<endl;
}
