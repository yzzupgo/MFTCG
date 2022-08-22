#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> P;
#define M 1000000007
int main(){
int n,k,c=0;cin>>n>>k;
for(int i=k+1;i<k+n;i++)c+=i;
cout<<c;
}
