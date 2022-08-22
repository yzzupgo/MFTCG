#include <iostream>
using std::cin;
using std::cout;
using std::max;
int main(){
int a,b;
cin >> a >> b;
cout << (max(a+b,max(a - b,a*b)));
return 0;
}
