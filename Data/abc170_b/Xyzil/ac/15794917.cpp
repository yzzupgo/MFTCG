#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
const int INF = 1e9 + 7;
const int N = 1e5+5;
int main() {
IO;
int n, x;
cin >> n >> x;
if (x%2 == 0 && x <= 4*n && x >= 2*n)
cout << "Yes";
else
cout << "No";
}
