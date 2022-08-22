#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a < 6) {
cout << 0 << endl;
}
else if (a < 13) {
cout << b/2 << endl;
}
else {
cout << b << endl;
}
return 0;
}
