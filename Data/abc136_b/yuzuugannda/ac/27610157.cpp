#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int n = s.length();
int sum = 0;
int ss;
ss = stoi(s);
if (n == 1) {
cout << s << endl;
}
else if (n%2 == 0) {
for (int i = 0; i < n/2; i++) {
sum += 9*pow(10, (2*i));
}
cout << sum << endl;
}
else {
for (int i = 0; i < n/2; i++) {
sum += 9*pow(10, (2*i));
}
sum += ss - pow(10, n - 1)+1;
cout << sum << endl;
}
}
