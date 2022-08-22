#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
fast;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll n;
cin >> n;
double a = floor(1.08 * n);
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
