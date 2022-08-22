#include <iostream>
using namespace std;
int main() {
int a,b;
while(cin>>a>>b){
bool stat=0;
for(int i=0;i<=3;i++){
if((2*i+4*(a-i))==b){
cout<<"Yes"<<'\n';
stat=1;
break;
}
}
if(stat==0){
cout<<"No"<<'\n';
}
}
}
