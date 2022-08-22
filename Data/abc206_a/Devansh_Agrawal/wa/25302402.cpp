#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
float q = 1.08 * n;
if(q < 206) {
cout << "Yay!" << endl;
} else if(q == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
