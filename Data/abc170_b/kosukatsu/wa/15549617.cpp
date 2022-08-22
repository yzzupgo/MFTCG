#include<iostream>
int main(){
int X,Y;
int numKame,numTuru;
std::cin>>X>>Y;
if(Y-2*X>=0 && 2*X-Y/2>=0){
std::cout<<"Yes";
}else{
std::cout<<"No";
}
}
