#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 100;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int X, Y;
cin >> X >> Y;
for(int a = 0; a <= X; a++) {
int b = X-a;
if(2*a + 4*b == Y) {
cout << "Yes" << endl;
exit(0);
}
}
cout << "No";
return 0;
}
