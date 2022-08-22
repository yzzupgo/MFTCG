#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     vector<ll>v(5);
     for(auto &i:v)cin>>i;
     sort(v.begin(),v.end(),[&](ll a,ll b){
               ll aa=a%10,bb=b%10;
               if(aa==0)return a>b;
               if(bb==0)return b>a;
               if(aa>bb)return a>b;
               else return a<b;
               });
     ll ans=0;
     for(ll i=0;i<=3;i++){
          ans+=(v[i]+9)/10*10;
     }    
     ans+=v[4];
     cout<<ans<<endl;
}    
