#include<iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if(a < 5) {
cout << 0;
}else if(a >= 13) {
cout << b;
}else {
cout << b/2;
}
return 0;
}