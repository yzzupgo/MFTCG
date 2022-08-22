#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     vector<ll>v(5);
     for(auto &i:v)cin>>i;
     vector<ll>p{0,1,2,3,4};
     ll ans=1<<30;
     do{
          ll tmp=0;
          for(ll i=0;i<5;i++){
               tmp=(tmp+9)/10*10;
               tmp+=v[p[i]];
          }    
          ans=min(tmp,ans);
     }while(next_permutation(p.begin(),p.end()));
     cout<<ans<<endl;
}    
