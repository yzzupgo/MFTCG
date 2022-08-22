#include <iostream>
using namespace std;
#include <stack>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <set>
#define ll long long
#define fi(s1,n1) for( ll i=s1; i<n1; i++)
#define fj(s2,n2) for( ll j=s2; j<n2; j++)
#define rfi(n1,s1) for( ll i=n1; i>=s1; i--)
#define pb push_back
#define fd(e,n) for( ll i=e; i>=0; i--)
#include <vector>
void solve() {
ll n;
cin >> n;
if((ll)(n * 1.08) < 206) {
cout << "Yay!" << "\n";
}
if((ll)(n * 1.08) == 206) {
cout << "so-so" << "\n";
}
if((ll)(n * 1.08) > 206) {
cout << ":(" << "\n";
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cin.tie(NULL);
ll t = 1;
while(t--) {
solve();
}
return 0;
}
