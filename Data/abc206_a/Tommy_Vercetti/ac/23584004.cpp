#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
int n;
cin >> n;
if(int(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(int(n * 1.08) > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
int main() {
int t = 1;
while(t--) {
solve();
}
return 0;
}
