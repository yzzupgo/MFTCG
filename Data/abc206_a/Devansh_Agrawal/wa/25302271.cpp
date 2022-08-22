#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
double q = 1.08 * n;
if(q < 206) {
cout << "Yay!" << endl;
} else if(q == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
