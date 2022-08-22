#include<iostream>
using namespace std;
int main()
{
long N,r=1,R=0;
cin>>N;
for(int i=1;i<=N;i++){
if(i%10==0){
r++;
}
if(r%2!=0){
R++;
}
}
cout<<R<<endl;
}
