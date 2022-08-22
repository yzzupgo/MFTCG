#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int i = y % 4;
int j = y / 4;
int l = i % 2;
int h = i / 2;
if(l == 0 && j + h == x) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
