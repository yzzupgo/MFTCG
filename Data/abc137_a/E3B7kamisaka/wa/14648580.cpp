#include <iostream>
using namespace std;
int main(void){
int a, b;
cin>>a>>b;
int t=a+b, h=a-b, j=a*b;
if (t>h && t>j){
cout<<t<<endl;
}
else if(h>t && h>j){
cout<<h<<endl;
}
else {
cout<<j<<endl;
}
return 0;
}
