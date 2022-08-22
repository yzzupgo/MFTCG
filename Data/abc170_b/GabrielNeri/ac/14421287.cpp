#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
int x, y;
cin >> x >> y;
if(y % 2) {
cout << "No\n";
} else {
int mn = x * 2;
int mx = x * 4;
if(y >= mn && y <= mx) {
cout << "Yes\n";
} else {
cout << "No\n";
}
}
return 0;
}
