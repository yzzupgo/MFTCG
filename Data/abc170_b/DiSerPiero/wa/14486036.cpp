#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(4*x<y){
cout<<"No"<<endl;
return 0;
}
if(!(y%4)||!(y%2)){
cout<<"Yes"<<endl;
return 0;
}
for(int i=1;4*i<y;i++){
if(!((y-4*i)%2)){
cout<<"Yes"<<endl;
break;
}
if((y-4*i)==1){
cout<<"No"<<endl;
}
}
return 0;
}
