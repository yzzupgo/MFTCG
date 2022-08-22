#include <iostream>
using namespace std;
int main() {
int a;
int b;
cin >> a >> b;
if (4*a <= b && b%2 == 0 && a*2 <= b){
cout <<"Yes";
}else {
cout << "No";
}
return 0;
}
