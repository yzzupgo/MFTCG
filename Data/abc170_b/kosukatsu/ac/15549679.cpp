#include<iostream>
int main(){
int X,Y;
int numKame,numTuru;
std::cin>>X>>Y;
numKame=(Y-2*X)/2;
numTuru=X-numKame;
if(numKame>=0 && numTuru>=0 && numKame*4+numTuru*2==Y){
std::cout<<"Yes";
}else{
std::cout<<"No";
}
}
