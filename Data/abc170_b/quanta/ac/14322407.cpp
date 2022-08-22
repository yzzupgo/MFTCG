#include<bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int a = 4*x - y;
if (a % 2 == 0 && a >= 0 && x - a/2 >= 0) {
cout << "Yes";
} else {
cout << "No";
}
return 0;
}
