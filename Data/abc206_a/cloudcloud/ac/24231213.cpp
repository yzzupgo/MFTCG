#include <bits/stdc++.h>
using namespace std;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
n *= 1.08;
if(n < 206) {
cout << "Yay!" << '\n';
} else if(n > 206) {
cout << ":(" << '\n';
} else {
cout << "so-so" << '\n';
}
}
