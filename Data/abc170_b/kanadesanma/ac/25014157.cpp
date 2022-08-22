#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y<2*x || 4*x<y){
cout<<"No"<<endl;
return 0;
}
if((y-2*x)%2==0 && (4*x-y)%2==0){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
