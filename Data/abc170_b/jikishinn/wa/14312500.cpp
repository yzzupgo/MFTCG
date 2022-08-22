#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
if (4*X-Y < 0) {
cout << "No" << endl;
}
else if (4*X-Y > 0 && (4*X-Y)%2 == 0) {
cout << "Yes" << endl;
}
else if (4*X-Y == 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
