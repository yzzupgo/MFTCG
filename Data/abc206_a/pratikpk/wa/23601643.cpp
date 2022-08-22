#include<bits/stdc++.h>
#define ll long long
#define inf 1000000007
#define umap unordered_map
using namespace std;
bool isPrime(long long n) {
int skip = 0;
if(n < 2) {
return false;
} else if(n == 2) {
return true;
}
long long limit = sqrt(n);
if(n % 2 == 0) {
return false;
}
for(int j = 3; j <= limit; j += 2) {
if(n % j == 0) {
return false;
}
}
return true;
}
void solve() {
ll n, i, k, freq = 0, len = 1, j, uni = 0, sum = 0, flag = 0, m = 0, q, ma = 0, mi = INT_MAX, a, b, c, d;
cin >> n;
k = 108 * n;
m = 206 * 100;
if(k < m) {
cout << "Yay!" << endl;
} else if(k == m) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ll t;
t = 1;
while(t--) {
solve();
}
}
