#include<iostream>
using namespace std;
int main(void){
int X,Y;
cin>>X;
cin>>Y;
if(X*2==Y){
cout<<"Yes";
return 0;
}else if(X*4==Y){
cout<<"Yes";
return 0;
}
for(int i=1;i<X;i++){
for(int j=1;j<=X-i;j++){
int sum=2*i+4*j;
if(sum==Y){
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
return 0;
}
