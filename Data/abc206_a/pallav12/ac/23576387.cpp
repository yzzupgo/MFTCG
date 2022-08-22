#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
vector<int> arr;
void solve() {
double n;
cin >> n;
if(floor(n * 1.08) < 206) {
cout << "Yay!";
} else if(floor(n * 1.08) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
while(t--) {
solve();
}
}
