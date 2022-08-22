#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(b%2!=0)
{
cout<<"No";
return 0;
}
if(a*4<b){
cout<<"No";
return 0;
}
if(a*2<=b &&b<=a*4){
cout<<"Yes";
return 0;
}
return 0;
}
