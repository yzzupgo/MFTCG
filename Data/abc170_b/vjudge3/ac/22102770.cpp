#include<iostream>
using namespace std;
int main() {
int x, y;
cin>>x>>y;
if(x==1) {
if(y==2) cout<<"Yes"<<endl;
else if(y==4) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
else if((y-2*x)==0) {
if((2*x)==y) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
else if((4*x-y)==0) {
if((4*x)==y) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
else {
if((y-2*x)>0 && (4*x-y)>0 && (y-2*x)%2==0 && (4*x-y)%2==0) {
cout<<"Yes"<<endl;
}
else {
cout<<"No"<<endl;
}
}
}
