#include <iostream>
using namespace std;
int main() {
int a,b,num;
cin>>a>>b;
for(int i=0;i<=a;i++){
num=a-i;
if(i*2+num*4==b){
cout<<"Yes"<<endl;
return 0;
break;
}
}
cout<<"No"<<endl;
return 0;
}
