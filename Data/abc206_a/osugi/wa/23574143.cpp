#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(n * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
