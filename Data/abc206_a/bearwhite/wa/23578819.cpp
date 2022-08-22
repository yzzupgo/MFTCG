#include <bits/stdc++.h>
using namespace std;
int main() {
int a;
cin >> a;
a *= 1.08;
if(a < 206) {
cout << "Yey!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
