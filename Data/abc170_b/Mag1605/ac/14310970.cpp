#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep2(i,a,n) for(int i = (a); i < (n); i++)
#define rep(i,n) rep2(i,0,n)
template<class T,class U>void chmin(T &t,U f){if(t>f)t=f;}
template<class T,class U>void chmax(T &t,U f){if(t<f)t=f;}
int main(){
cin.tie(nullptr);ios_base::sync_with_stdio(false);
int x,y,j;cin>>x>>y;
rep(i,x+1){
j=x-i;
if(i+j<=x&&i*2+j*4==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
