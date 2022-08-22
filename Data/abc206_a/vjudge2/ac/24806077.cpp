#include <bits/stdc++.h>
using namespace std;
int main() {
int n, ans = 0;
cin >> n;
ans = n * (1.08);
if(ans < 206) {
cout << "Yay!";
}
if(ans == 206) {
cout << "so-so";
}
if(ans > 206) {
cout << ":(";
}
}
