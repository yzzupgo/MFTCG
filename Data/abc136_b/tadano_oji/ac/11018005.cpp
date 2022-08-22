#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long N,r=1,R=0,x=10;
cin>>N;
for(int i=1;i<=N;i++){
if(i%x==0){
r++;
x*=10;
}
if(r%2!=0){
R++;
}
}
cout<<R<<endl;
}
