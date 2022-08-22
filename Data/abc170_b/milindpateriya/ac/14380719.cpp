#include <iostream>
using namespace std;
int main(){
int X{},Y{};
cin>>X>>Y;
if(Y%2==0){
if((Y-(2*X))/2 <= X && (Y-(2*X))/2 >=0)
cout<<"Yes";
else
cout<<"No";
}
else{
cout<<"No";
}
return 0;
}
