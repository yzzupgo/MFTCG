#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
cout << n * 1.08 << endl;
if(floor(n * 1.08) > 206) {
cout << ":(" << endl;
} else if(floor(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
