#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define fo(i,a,n) for(int i=a;i<n;i++)
#define foo(i,a,n) for(int i=a;i>=n;i--)
#define get(n) cin>>n
#define put(n) cout<<n
#define all(v) v.begin(),v.end()
using namespace std;
void solve() {
ll t = 1;
while(t--) {
ll n;
cin >> n;
ll x = n * 1.08;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
std::cin.tie(0);
solve();
}
