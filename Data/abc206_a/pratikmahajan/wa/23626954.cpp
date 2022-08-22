#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
ll N;
cin >> N;
double k = 1.08 * N;
if((int)k > 206) {
cout << "Yay!";
} else if((int)k == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
ll t = 1;
while(t--) {
solve();
}
}
