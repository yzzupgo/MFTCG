#include <iostream>
using namespace std;
int main(void){
int a,b,c,d,e;
cin >> a>>b>>c>>d>>e;
if(a == 0){
cout << b - 1 << endl;
}
if(b == 0){
cout << c - 1 << endl;
}
if(c == 0){
cout << d - 1 << endl;
}
if(d == 0){
cout << e - 1 << endl;
}
if(e == 0){
cout << d + 1 << endl;
}
}
