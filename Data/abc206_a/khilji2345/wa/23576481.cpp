#include <bits/stdc++.h>
using namespace std;
int main() {
int n, p;
cin >> n;
p = 1.08 * n;
if(p == 206) {
cout << "so-so" << "\n";
} else if(p > 206) {
cout << ":(" << "\n";
} else {
cout << "yay!" << "\n";
}
return 0;
}
