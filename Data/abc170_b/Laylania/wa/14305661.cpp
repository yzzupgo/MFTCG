#include<bits/stdc++.h>
using namespace std;
int main(void) {
int X, Y;
cin >> X >> Y;
for (int c = 0; c <= 100; ++c) {
for (int t = 0; t <= 100; ++t) {
if ((c + t) == X && (2 * c + 4 * t) == Y) {
cout << "YES" << endl;
return 0;
}
}
}
cout << "NO" << endl;
}
