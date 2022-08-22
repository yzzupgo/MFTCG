#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define ff first
#define ss second
#define ll long long
#define pb push_back
void solve() {
int n;
cin >> n;
float k = (float)(n * 1.08);
if(floor(k) < 206) {
cout << "Yay";
} else if(floor(k) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
