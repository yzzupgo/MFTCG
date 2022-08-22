#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int ani;
int patas;
cin>>ani;
cin>>patas;
if(patas >= ani*4 || patas<= ani*2){
cout<<"No"<<endl;
}else{
if(patas%2==0){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
}
