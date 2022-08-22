#include<bits/stdc++.h>
using namespace std;
void solve() {
int n;
cin >> n;
int total = (n * 1.08);
if(total < 206) {
cout << "Yay!";
} else {
if(total == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
int main() {
solve();
return 0;
}
