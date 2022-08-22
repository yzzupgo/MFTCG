#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
const double x = 1.08;
ll n;
cin >> n;
n *= x;
if(n == 206) {
cout << "so-so";
} else if(n < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
