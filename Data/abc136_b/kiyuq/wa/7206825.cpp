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
}else{
c+=n-99;
break;
}
if(n==100000){
c+=90000;
break;
}else{
c+=n-9999;
break;
}
}
cout << c << "\n";
}
