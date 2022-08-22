#include <iostream>
#include<vector>
using namespace std;
int main(void){
int a,b;
cin>>a>>b;
for(int i=0; i<a; i++){
for(int j=0; j<a; j++){
if(b-(4*i+2*j)==0){
if(i!=0 || j!=0){
if(i+j==a){
cout<<"Yes"<<endl;
return 0;
}
}
}
}
}
if(a==1){
if(b==2 || b==4){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
