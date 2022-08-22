#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
ll expo(ll a, ll b, ll mod) {
ll res = 1;
while(b > 0) {
if(b & 1) {
res = (res * a) % mod;
}
a = (a * a) % mod;
b = b >> 1;
}
return res;
}
ll mminvprime(ll a, ll b) {
return expo(a, b - 2, b);
}
ll mod_add(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
int main() {
int n;
cin >> n;
double ans = n * 1.08;
int no = floor(ans);
if(no == 206) {
cout << "so-so" << "\n";
return 0;
}
if(no < 206) {
cout << "Yay!" << "\n";
return 0;
}
cout << ":(" << "\n";
}
