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
long long int cyphen = n / 100 * 108;
if(cyphen < 206) {
cout << "Yay!";
} else if(cyphen == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
