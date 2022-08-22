#include<bits/stdc++.h>
using namespace std ;
#define ll long long
typedef pair<ll,ll> pr;
typedef vector<ll> vc;
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define repr(i,a,b) for(ll i=a;i>=b;i--)
#define reps(i,v) for(ll i=0;i<v.size();i++)
#define test ll int tcase ; cin>>tcase ; while(tcase--)
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
io ;
int a,b ; cin>>a>>b ;
if(a==1 and b==2){
cout<<"Yes\n" ; return 0 ;
}
if(a==1 and b==4){
cout<<"Yes\n" ; return 0 ;
}
for(int i=1 ; i<=a ; i++){
if( 2*i + 4*(a-i)==b){
cout<<"Yes\n" ; return 0 ;
}
}
cout<<"No\n" ;
}
