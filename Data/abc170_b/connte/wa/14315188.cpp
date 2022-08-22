#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
int x,y;
cin>>x>>y;
int turu=1;
rep(i,2*x){
int kame=x-turu;
int p=2*turu+4*kame;
if(p==y && (turu>0 && turu<=100) && (kame>0 && kame<=100)){
cout<<"Yes\n";
return 0;
}
turu++;
}
cout<<"No\n";
}
