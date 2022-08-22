#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for(int i = 0; i <= 100; i += 1)
for(int j = 0; j <= 100; j += 1)
if(i * 2 + j * 4 == y) {
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
}
