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
cout<<a<<" "<<b;
if(a<0 || b<0 || a>x || b>x){
cout<<"No"<<"\n";
}else{
cout<<"Yes"<<"\n";
}
return 0;
}
