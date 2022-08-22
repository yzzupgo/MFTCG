#include<iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if((y&1) || (2*x > y) || (y > x*4)) cout << "No\n";
else cout << "Yes\n";
return 0;
}
