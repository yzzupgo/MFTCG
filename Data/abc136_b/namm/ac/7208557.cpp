#include<iostream>
using namespace std;
int main(){
int n, a, b, c, d;
cin >> n;
if(n == 100000){
a = 1, b = 1, c = 1, d = 0;
}
else if(n >= 10000){
a = 1, b = 1, c = 0, d = n - 9999;
}
else if(n >= 1000){
a = 1, b = 1, c = 0, d = 0;
}
else if(n >= 100){
a = 1, b = 0, c = 0, d = n - 99;
}
else if(n >= 10){
a = 1, b = 0, c = 0, d = 0;
}
else{
a = 0, b = 0, c = 0, d = n;
}
cout << a * 9 + b * 900 + c * 90000 + d << endl;
return 0;
}
