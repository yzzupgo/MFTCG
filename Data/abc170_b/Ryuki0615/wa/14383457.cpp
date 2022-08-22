#include <iostream>
using namespace std;
int main(void){
int x,y;
cin>>x>>y;
int z;
for(int i=0;i<=x;i++){
z=y-i*2+(x-i)*4;
if(z==0){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
