#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <vector>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N = 2e5 + 5;
int arr[31][31];
int32_t main() {
IOS;
int x, y;
cin >> x >> y;
if ( x*y % 6 == 0 || y<= 6) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
