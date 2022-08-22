#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
ll n ;
cin >> n;
ll x = ((1.08) * (n));
if(x == 206) {
cout << "so-so" << endl;
} else {
if(x > 206) {
cout << "(." << endl;
} else {
cout << "Yay!" << endl;
}
}
}
int main() {
solve();
}
