#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll n;
cin >> n;
n *= 1.08;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":)";
}
}
