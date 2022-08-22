#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i = 0; i < n; i++)
int main() {
int n;
cin >> n;
int ans = n * 1.08;
if(ans == 206) {
cout << "so-so" << endl;
}
if(ans < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
