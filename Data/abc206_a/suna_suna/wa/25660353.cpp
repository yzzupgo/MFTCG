#include <bits/stdc++.h>
using namespace std;
int main() {
int x, a;
cin >> x;
a = 1.08 * x;
if(a > 206) {
cout << "Yay!" << '\n';
} else if(a == 206) {
cout << "so-so" << '\n';
} else {
cout << ":(" << '\n';
}
return 0;
}
