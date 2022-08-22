#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!" << endl;
} else if(1.08 * n == 206.28) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
