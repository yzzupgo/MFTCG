#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y<x || 3*x<y){
cout<<"No"<<endl;
return 0;
}
if((y-x)%2==0 && (3*x-y)%2==0){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
