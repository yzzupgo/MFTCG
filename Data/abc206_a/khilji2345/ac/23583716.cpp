#include <bits/stdc++.h>
using namespace std;
int main() {
int n, p;
cin >> n;
p = floor(1.08 * n);
if(p == 206) {
cout << "so-so" << "\n";
} else if(p > 206) {
cout << ":(" << "\n";
} else {
cout << "Yay!" << "\n";
}
return 0;
}
