#include <bits/stdc++.h>
using namespace std;
constexpr int N = 105;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
if(n * 108 / 100 > 206) {
cout << ":(" << endl;
} else if(n * 108 / 100 < 206) {
cout << "Yay!" << endl;
} else if(n * 108 / 100 == 206) {
cout << "so-so" << endl;
}
}
