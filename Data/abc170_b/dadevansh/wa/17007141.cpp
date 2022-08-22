#include <iostream>
using namespace std;
int main() {
int a,b,num;
cin>>a>>b;
for(int i=0;i<=a;i++){
num=a-i;
if(i*2+num*4==b){
cout<<"YES";
return 0;
break;
}
}
cout<<"NO";
return 0;
}
