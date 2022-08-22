#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(b%2!=0) cout<<"No";
else{
float x,y;
x=2*a-float(b/2);
y=2*a-(b/2);
if(x<0) cout<<"No";
else if((x-y)==0) cout<<"Yes";
else cout<<"No";
}
}
