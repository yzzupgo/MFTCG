#include<bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
string ans = "No";
for (int i = 1 ; i <= a; i++) {
int j = a - i ;
if (i * 2 + j * 4 == b) {
ans = "Yes";
}
}
cout << ans << endl;
}
