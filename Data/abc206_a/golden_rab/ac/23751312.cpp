#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
int main() {
int n;
cin >> n;
int k = (n * 1.08);
if(k < 206) {
cout << "Yay!" << endl;
} else if(k == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
