#include<iostream>
using namespace std;
int main(void) {
int a=0, b=0;
cin >> a ;
cin >> b;
if (a >= 13) {
cout << b;
}
else if(a>5){
cout << b / 2;
}
else {
cout << 0;
}
return 0;
}
