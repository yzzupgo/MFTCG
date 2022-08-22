#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,a,b,z;
cin>>x>>y;
z=y-2*x;
if(z%2){
cout<<"No"<<endl;
return 0;
}
b=z/2;
a=x-b;
if(b<0||a<0){
cout<<"Yes"<<endl;
return 0;
}
cout<<"Yes"<<endl;
return 0;
}
