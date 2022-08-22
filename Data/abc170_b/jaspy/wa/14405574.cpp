#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int x, y;
cin >> x;
cin >> y;
if (y%2 != 0) cout << "No"; return 0;
if ((4*x - y) >= 0 && (3*x- (y/2)) >= 0) cout << "Yes";
else cout << "No";
return 0;
}
