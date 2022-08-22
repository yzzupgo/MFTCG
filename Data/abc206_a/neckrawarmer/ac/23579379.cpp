#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
double A;
cin >> A;
ll x = floor(A * 1.08);
if(x < 206ll) {
cout << "Yay!" << endl;
} else if(x == 206ll) {
cout << "so-so" << endl;
} else {
cout << ":(";
}
}
