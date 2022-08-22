#include <bits/stdc++.h>
using namespace std;
void solve() {
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
double n ;
cin >> n;
double a = floor(n * 1.08);
double b = 206;
if(a < b) {
cout << "Yay!\n";
} else if(a == b) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
