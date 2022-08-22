#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
const int maxS = 1e5 + 1;
ll add(ll a, ll b) {
return ((a % mod) + (b % mod)) % mod;
}
ll product(ll a, ll b) {
return ((a % mod) * (b % mod)) % mod;
}
ll binarySearch(pair<ll, ll> *arr, ll x, ll i, ll j) {
ll mid = (i + j) / 2;
if(arr[mid].first == x) {
return mid;
} else if(arr[mid].first < x) {
binarySearch(arr, x, mid + 1, j);
} else {
binarySearch(arr, x, i, mid - 1);
}
}
int main() {
ll t = 1;
while(t--) {
ll n;
cin >> n;
ll f = 1.08 * n;
if(f < 206) {
cout << "Yay!\n";
} else {
cout << "so-so\n";
}
}
}
