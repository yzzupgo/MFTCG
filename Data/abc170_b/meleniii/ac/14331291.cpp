#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c;
cin >> a >> b;
a *= 2;
c = a*2;
if (b >= a && b <= c && b % 2 == 0) {
cout << "Yes";
} else {
cout << "No";
}
}
