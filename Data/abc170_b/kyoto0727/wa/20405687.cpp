#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for(int i = 1; i < x; i++) {
int count = 0;
count += (2 * i);
count += (4 * (x - i));
if(count == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
