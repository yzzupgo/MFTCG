#include <bits/stdc++.h>
#define f first
#define s second
#define ar array
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
long double n;
cin >> n;
if(floor(n * 1.08) < 206) {
cout << "YAY";
}
if(floor(n * 1.08) > 206) {
cout << ":(";
}
if(floor(n * 1.08) == 206) {
cout << "so-so";
}
}
