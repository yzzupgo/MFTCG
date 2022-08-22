#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int result = (n * 108) / 100;
if(result < 206) {
cout << "Yey!" << endl;
} else if(result == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
