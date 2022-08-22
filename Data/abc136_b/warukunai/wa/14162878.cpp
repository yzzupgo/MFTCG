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
int n;
cin >> n;
if(n < 10) {
cout << n << endl;
} else if(n < 100) {
cout << 9 << endl;
} else if(n < 1000) {
cout << 9 + (n - 99) << endl;
} else if(n < 10000) {
cout << 909 << endl;
} else if(n < 100000) {
cout << 909 + (n - 999) << endl;
} else {
cout << 90909 << endl;
}
}
