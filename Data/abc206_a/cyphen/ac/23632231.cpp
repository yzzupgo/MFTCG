#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int gcd(int a, int b) {
if(a == 0) {
return b;
}
if(b == 0) {
return a;
}
if(a == b) {
return a;
}
if(a > b) {
return gcd(a - b, b);
}
return gcd(a, b - a);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n;
cin >> n;
int res = 108 * n / 100;
if(res < 206) {
cout << "Yay!" << "\n";
} else if(res == 206) {
cout << "so-so" << "\n";
} else {
cout << ":(" << "\n";
}
return 0;
}
