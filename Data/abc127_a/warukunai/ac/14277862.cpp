#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if(a >= 13) {
cout << b << endl;
} else if(a <= 5) {
cout << 0 << endl;
} else {
cout << b / 2 << endl;
}
}
