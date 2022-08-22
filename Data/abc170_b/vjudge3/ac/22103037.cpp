#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(y % 2 == 1) cout << "No";
else{
int y1 = y/2;
if((y1-x) >= 0 && y1-x <= x) cout << "Yes";
else
cout << "No";
}
}
