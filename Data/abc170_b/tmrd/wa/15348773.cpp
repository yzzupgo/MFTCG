#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for(int i=1; i<=X; i++) {
int j= X-i;
if(2 * i + 4 * j == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
