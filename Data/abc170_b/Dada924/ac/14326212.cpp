#include <iostream>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
if(Y%2==0){
if(Y<2*X||Y>4*X){
cout<<"No"<<endl;
}
else{
cout<<"Yes"<<endl;
}
}else
cout<<"No"<<endl;
return 0;
}
