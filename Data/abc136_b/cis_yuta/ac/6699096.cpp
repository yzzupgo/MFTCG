#include <iostream>
#include <cmath>
using namespace std;
int main(void){
int num,a,cnt,b,even;
cin >> num;
a = num;
unsigned digit=0;
while(num!=0){
num /= 10;
digit++;
}
cnt=0;
even=digit/2;
for(int i=0;i<even;i++){
b = pow(100, i);
cnt+=9*b;
}
if(digit%2==1){
b = pow(10, digit-1);
cnt+=a-b;
}
b=pow(10, digit-1);
if(a == b && digit%2==1){
cout << cnt+1 << endl;
}else if(a == b && digit%2==1){
cout << cnt << endl;
}else if(digit%2==0){
cout << cnt << endl;
}else{
cout << cnt+1 << endl;
}
return 0;
}
