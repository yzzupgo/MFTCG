#include <bits/stdc++.h>
using namespace std;
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
n *= 108;
if(n < 20600) {
cout << "Yay!" << '\n';
} else if(n > 20600) {
cout << ":(" << '\n';
} else {
cout << "so-so" << '\n';
}
}
