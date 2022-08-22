#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(4*x-y>=0){
if((4*x-y)&1 ){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
}else{
cout<<"No"<<endl;
}
}
