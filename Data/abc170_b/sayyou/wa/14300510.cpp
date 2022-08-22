#include <iostream>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
int main() {
int x, y;
cin >> x >> y;
if ((4 * x - y) % 2 == 0 && 4 * x >= y) {
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
