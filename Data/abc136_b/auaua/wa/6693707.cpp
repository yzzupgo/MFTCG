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
int k=0;
int a=n;
while(a){
a/=10;
k++;
}
int count=0,f=1;
for(int i=0;i<k;i++){
if(i%2==0){
f=1;
for(int j=0;j<i;j++)f*=10;
count+=9*f;
}
}
if(!k%2)count+=n%f;
cout<<count<<endl;
}
