#include<iostream>
using namespace std;
int main(){
int total=0;
int total_ashi=0;
int fool=0;
cin>>total>>total_ashi;
for(int i=0;i<total;i++){
if((4*i+2*(total-i))==total_ashi){
cout<<"Yes\n";
fool++;
}
}
if(fool==0){
cout<<"No\n";
}
}
