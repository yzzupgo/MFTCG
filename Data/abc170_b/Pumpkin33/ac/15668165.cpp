#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y; cin>>x>>y;
if(x*2==y||x*4==y)
cout<<"Yes"<<endl;
else{
if((x*4-y)%2==0&&x*4>y){
if((x*4-y)/2<x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
else
cout<<"No"<<endl;
}
}
