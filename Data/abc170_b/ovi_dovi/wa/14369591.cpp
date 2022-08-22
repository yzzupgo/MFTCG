#include <iostream>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if (y&1 != 1 and x*4 >= y and x*2 <= y) cout << "Yes" << endl;
else cout << "No" << endl;
}
