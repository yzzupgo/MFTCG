#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
int main() {
int n;
cin >> n;
if (n < 10) {
cout << n;
}
else if(10 <= n && n < 100) {
cout << 9;
}
else if(100 <= n && n < 1000) {
cout << 9 + n % 100 + 100 * (n / 100 - 1) + 1;
}
else if(1000 <= n && n < 10000) {
cout << 909;}
else if(10000 <= n && n < 100000){
cout << 909 + n % 10000 + 10000 * (n / 10000 - 1) + 1;
}
else {
cout << 90909;
}
}
