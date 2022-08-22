#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> P;
#define M 1000000007
int main(){
int n,k,c=0;cin>>n>>k;bool f=false;
for(int i=k;i<k+n;i++){
c+=i;
if(i==0)f=true;
}
cout<<(f?c:(k>0?c-k:c-(k+n-1)));
}
