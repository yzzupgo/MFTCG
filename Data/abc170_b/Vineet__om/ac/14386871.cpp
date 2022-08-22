#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve(){
int x,y;
cin>>x>>y;
for(int i=0;i<=100;i++){
int a=x-i;
if(a>=0){
if((i*2+a*4)==y){
cout<<"Yes"<<endl;
return ;
}
}
}
cout<<"No"<<endl;
return;
}
int main(){
solve();
}
