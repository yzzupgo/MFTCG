#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 108 / 100 > 206) {
cout << ":(" << endl;
} else if(n * 108 / 100 < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
