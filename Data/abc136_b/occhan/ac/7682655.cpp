#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> P;
#define M 1000000007
int main(){
int n,c=0;cin>>n;
for(int i=1;i<=n;i++){
if(i<10||i>99&&i<1000||i>9999&&i<100000)c++;
}
cout<<c;
}
