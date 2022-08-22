#include <bits/stdc++.h>
using namespace std;
void solve() {
int N;
cin >> N;
int x = N * 1.08;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
int t = 1;
while(t--) {
solve();
}
return 0;
}
