#include <iostream>
using namespace std;
int main() {
int a;
cin >> a;
int b;
cin >> b;
if (a >= 13){
cout<<b;
}
if (a <= 12 && a >= 6){
cout<<b/2;
}
if (a <= 5){
cout<<"0";
}
return 0;
}
