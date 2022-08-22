#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
#endif
ll n;
cin >> n;
ll ans = n * 1.08;
if(ans < 206) {
cout << "Yay!\n";
} else if(ans == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
