#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1000000000;
bool cmp(pair<int, int> a, pair<int, int> b) {
return a.second < b.second;
}
void solve() {
ll n;
cin >> n;
ll op = (int)(1.08 * n);
if(n < 206) {
cout << "Yay !" << "\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t = 1;
while(t--) {
solve();
}
}
