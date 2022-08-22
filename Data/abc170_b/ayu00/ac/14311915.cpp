#include<bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int t = a * 2;
int k = a * 4;
if (b >= t && b <= k && b % 2 == 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
