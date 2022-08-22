#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MOD = 1000000007;
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define debug(x) cout << #x << " : " << x << endl
#define part cout << "----------------------------------\n";
#include <iostream>
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
#define fastinput \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.tie(NULL);
LL POW(LL x, LL y) {
LL ans = 1;
LL base = x;
while(y) {
if(y & 1) {
ans *= base;
}
base = base * base;
y = y >> 1;
}
return ans;
}
int main() {
fastinput;
double n;
cin >> n;
n *= 1.08;
int final = n;
if(final < 206) {
cout << "Yay!" << endl;
} else if(final == 206) {
cout << "so-so" << endl;
} else {
cout << ":)" << endl;
}
return 0;
}
