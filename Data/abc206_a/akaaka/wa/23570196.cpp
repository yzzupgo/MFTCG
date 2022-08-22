#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ll long long
#define mod 998244353
using namespace std;
int main() {
double n;
cin >> n;
double nedan = 1.08 * n;
int ans = nedan;
if(nedan < 206) {
cout << "Yay!";
} else if(nedan == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
