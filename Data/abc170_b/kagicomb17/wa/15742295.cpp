#include <iostream>
using namespace std;
int main(void){
int X,Y;
cin>>X>>Y;
int B=Y-(2*X);
if(Y==1||Y%2==1){
cout<<"No"<<endl;
}
else if(Y>(4*X)){
cout<<"No"<<endl;
}
else if((B%2)>0){
cout<<"No"<<endl;
}
else if((B%2)==0){
cout<<"Yes"<<endl;
}
}
