#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int ans = 108 * n;
if(ans < 20600) {
cout << "Yay!" << endl;
}
if(ans == 20600) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
