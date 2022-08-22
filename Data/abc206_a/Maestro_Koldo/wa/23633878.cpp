#include<bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ps() cout << "\n"
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
using namespace std;
const int MOD = 1e9 + 7, MOD1 = (119 << 23) | 1;
const int INF = 1e9 + 5, MAX = 2e5 + 5;
int main() {
cpu();
int x;
cin >> x;
x = int(1.08 * x);
if(x < 206) {
cout << "Yay!\n";
}
if(x == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
