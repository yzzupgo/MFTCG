#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll n;
cin >> n;
ll ans = floor(n * 1.08);
if(ans < 206) {
cout << "Yay!";
} else if(ans > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
