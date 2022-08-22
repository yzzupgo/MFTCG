#include <iostream>
#include <vector>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int a, b;
if((y - 2 * x) % 2) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
