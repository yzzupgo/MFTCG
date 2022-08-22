#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int n;
cin >> n;
int ans = n * 108;
ans /= 100;
if(ans == 206) {
cout << "so-so";
} else if(ans < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
