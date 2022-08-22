#define rep(i,n) for(ll i=0, i ##_len=(n); i<i ##_len; ++i)
#define rrep(i,n) for(ll i ##_len=(n) ,i=i ##_len-1;i>=0;--i)
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)
#define printd(val) std::cout<< #val" = " <<val<<"\n";
#include<bits/stdc++.h>
using ll = int;
using pii = std::pair<int,int>;
using namespace std;
template<class T>T chmin(T a,T b){if(a>b){a^=b;b^=a;a^=b;return 1;}return 0;}
template<class T>T chmax(T b,T a){if(a<b){a^=b;b^=a;a^=b;return 1;}return 0;}
int n;
void input(){
cin>>n;
}
void src(){
if(n<100){
if(n>=9){
cout<<9;
}else{
cout<<n;
}
}else if(n<10000){
if(n>=999){
cout<<909;
}else{
cout<<9+n-99;
}
}else if(n<1000000){
if(n>=99999){
cout<<90909;
}else{
cout<<909+n-9999;
}
}
return;
}
int main(int argc,char* argv[]){
ios::sync_with_stdio(false);
input();
src();
return 0;
}
