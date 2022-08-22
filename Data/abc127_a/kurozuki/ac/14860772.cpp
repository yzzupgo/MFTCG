using namespace std;
#include <iostream>
int main(){
int a,b;
cin>>a>>b;
if(b%2==0){
if(13<=a){
std::cout << b << std::endl;
}
else if(6<=a && a<13){
std::cout << b/2 << std::endl;
}
else{
std::cout << "0" << std::endl;
}}
}
