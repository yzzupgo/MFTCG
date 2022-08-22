#include <iostream>
using namespace std;
int main() {
int n=0;
int i=0;
int a=0;
cin >> n;
if(n > 9){
i+=9;
if(n > 999){
i+=900;
if(n>99999){
i+=90000;
}else{
a=n-9999;
if(a<0) a=0;
i+=a;
}
}else{
a=n-99;
if(a<0) a=0;
i+=a;
}
}else{
i=n;
}
cout << i;
return 0;
}
