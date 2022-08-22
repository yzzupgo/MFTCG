#include <iostream>
using namespace std;
#define rep(i,n) for(int i = 0 ; i<= n ; i++)
int main()
{
int x, y;
cin >> x >> y;
string check = "No";
rep(i, x) {
if (2 * i + 4 * (x - i) == y) { check = "Yes"; }
}
if (x== 0 || y == 0) {
check = "Yes";
}
cout << check;
}
