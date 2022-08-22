#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!" << endl;
} else if(1.08 * n > 207) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
cout << 1.08 * n;
}
