#include <iostream>
using namespace std;
int main(void){
int X,Y;
cin>>X>>Y;
if((Y/X+Y%X)<=4&&(Y/X+Y%X)>=2){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
