#include <iostream>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if(b>=0){
cout << (a-1)*(a+2*b)/2 << endl;
}
if(b<0&&abs(b)<=a){
cout << a*(a+2*b-1)/2 << endl;
}
if(b<0&&abs(b)>a){
cout << (a-1)*(a+2*b-2)/2 << endl;
}
return 0;
}
