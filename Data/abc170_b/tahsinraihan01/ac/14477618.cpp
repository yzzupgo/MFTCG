#include<iostream>
using namespace std;
int main()
{
int x, y,i , j=0;
cin>>x>>y;
for(i=0;i<=x;i++){
if((x-i)*2+i*4==y){
cout<<"Yes"<<endl;
j=1;
}
}
if(j==0)cout<<"No"<<endl;
}
