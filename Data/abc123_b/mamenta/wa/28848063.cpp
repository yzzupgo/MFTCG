#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     vector<ll>v(5);
     for(auto &i:v)cin>>i;
     ll x=0,flg=1;
     for(ll i=1;i<=10&&flg;i++){
          for(;x<5;x++){
               if((v[x]%10)==(i%10)){
                    flg=0;
                    break;
               }    
          }    
     }    
     ll ans=0;
     for(ll i=0;i<5;i++){
          if(i!=x){
               ans+=(v[i]+9)/10*10;
          }    
     }    
     cout<<ans+v[x]<<endl;
}    