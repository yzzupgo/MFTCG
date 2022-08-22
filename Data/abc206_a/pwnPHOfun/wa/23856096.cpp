#include<bits/stdc++.h>
#include<set>
#include<stdio.h>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<fstream>
#define ull unsigned long long
#define ll long long
#define pb push_back
using namespace std;
ull power(ll x, ull y) {
if(y == 0) {
return 1;
} else if(y % 2 == 0) {
return power(x, y / 2) * power(x, y / 2);
} else {
return x * power(x, y / 2) * power(x, y / 2);
}
}
ll my_ceil(ll a, ll b) {
return (a / b) + ((a % b) != 0);
}
void solve() {
int N;
cin >> N;
if(floor(1.06 * N) > 206) {
cout << ":(";
} else if(floor(1.06 * N) == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
int main() {
solve();
}
