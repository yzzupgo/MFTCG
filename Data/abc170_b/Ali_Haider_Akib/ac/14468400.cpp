#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
for(int i=0;i<=100;i++)
{
int a=x-i;
if(a>=0){
if(i*2 + a*4==y){
cout<<"Yes"<<endl;
return 0;
}
}
}
cout<<"No"<<endl;
return 0;
}
