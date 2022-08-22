#include <iostream>
using namespace std;
int main(void){
int x,y;
cin>>x>>y;
if(y%3==0){
cout<<"No"<<endl;
}
else if(x*2<=y&&x*4>=y){
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
}
