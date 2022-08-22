#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;
signed main() {
int n;
cin >> n;
if (n <= 9) {
cout << n % 10;
}
else if (n <= 99) {
cout << "9";
}
else if (n < 999) {
cout << 10 + n - 100;
}
else if (n <= 9999) {
cout << 9 + 900;
}
else if (n <= 99999) {
cout << 910 + n - 10000;
}
else {
cout << 90909;
}
}
