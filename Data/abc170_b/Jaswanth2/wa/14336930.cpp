#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int x,y;
cin>>x>>y;
int a=(y-(2*x))/2;
int b=((4*x)-y)/2;
if(y>=(2*x) && (4*x)>=y){
cout<<"Yes"<<"\n";
}else{
cout<<"No"<<"\n";
}
return 0;
}
