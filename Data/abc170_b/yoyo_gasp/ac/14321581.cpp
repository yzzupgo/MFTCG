#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(b%2!=0)
{
cout<<"No";
}
else
if(a*4<b || a*2>b){
cout<<"No";
}else
if(a*2<=b &&b<=a*4){
cout<<"Yes";
}
return 0;
}
