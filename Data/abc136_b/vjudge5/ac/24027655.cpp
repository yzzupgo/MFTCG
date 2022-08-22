#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n;
cin>>n;
ll cnt=0;
for(ll i=1; i<=n; i++){
if(i < 10 || (99 < i && i < 1000) || (9999 < i && i < 100000)) cnt++;
}
cout<<cnt<<endl;
}
