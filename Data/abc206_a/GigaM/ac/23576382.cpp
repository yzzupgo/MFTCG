#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout<<fixed; cout<<setprecision(9);
#define PI 3.14159265358979323846264338327950L
#define int long long
using namespace std;
void solve() {
int n;
cin >> n;
n *= (1.08);
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
signed main() {
IOS;
int t = 1;
while(t--) {
solve();
}
}
