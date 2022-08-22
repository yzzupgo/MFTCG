#include <iostream>
using namespace std;
int main(void){
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
int c=0;
while(1){
if(n>9){
c+=9;
}else{
c=n;
break;
}
if(n>999){
c+=900;
}else if(n<100){
break;
}else{
c+=n-99;
break;
}
if(n>99999){
c+=90000;
break;
}else if(n<10000){
break;
}else{
c+=n-9999;
break;
}
}
cout << c << "\n";
}
