#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool found = false;
for(int c = 0; c <= 100; c++) {
for(int t = 0; t <= 100; t++) {
if(2*c+4*t == y and (c+t == x)) {
cout << "Yes" << endl;
found = true;
break;
}
}
}
if(!found)
cout << "No" << endl;
return 0;
}
