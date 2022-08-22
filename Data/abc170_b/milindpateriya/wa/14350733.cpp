#include <iostream>
using namespace std;
int main(){
int X{},Y{};
cin>>X>>Y;
if(Y%2==0){
int i{};
for( i=0;i<Y-X;i++){
if(((Y-X)-i)%3 == 0){
if(((Y-X)-i)/3 <= 25 && ((Y-X)-i)/3 >= 0)
cout<<"Yes";
}
}
if(i == Y-X+1)
cout<<"No";
}
else{
cout<<"No";
}
return 0;
}
