#include <bits/stdc++.h>
using namespace std;
const int nxm = 1e3 + 10;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
float x;
cin >> x;
if(1.08 * x < 206) {
cout << "Yay!";
} else if(x * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
