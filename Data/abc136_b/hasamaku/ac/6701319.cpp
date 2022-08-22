#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
long long int n, ans = 0;
string s;
cin >> s;
n = s.size();
if(n == 2) {
ans = 9;
} else if(n == 3) {
ans = 9 + atoi(s.c_str()) - 99;
} else if(n == 4) {
ans = 909;
} else if(n == 5) {
ans = 909 + atoi(s.c_str()) - 9999;
} else if(n == 6) {
ans = 90909;
} else {
ans = atoi(s.c_str());
}
cout << ans << '\n';
}
