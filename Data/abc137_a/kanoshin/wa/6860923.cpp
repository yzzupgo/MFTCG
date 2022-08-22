#include <iostream>
using namespace std;
int main(){
int a;
int b;
cin >> a;
cin >> b;
if(a*b<=0){
if(0<b){
cout << a-b;
}else{
cout << a+b;
}
}else{
if(a==1||b==1){
cout << a+b;
}else{
cout << a*b;
}
}
return 0;
}
