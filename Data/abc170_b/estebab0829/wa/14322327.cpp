#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(((4*x-y)%2)==0 && ((y-2*x)%2)==0 && ((y-2*x)/2)>=0 && ((4*x-y)/2)>=0){
if( ((4*x-y)/2+(y-2*x)/2)==x && ((4*x-y)/2*2+(y-2*x)/2*4)==y){
cout<<"yes"<<endl;
}else{
cout<<"no"<<endl;
}
}else{
cout<<"no"<<endl;
}
}
