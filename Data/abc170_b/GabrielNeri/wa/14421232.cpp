#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
int x, y;
cin >> x >> y;
if(y % 2) {
cout << "No\n";
} else {
int z = x * 4;
if(z >= y) {
cout << "Yes\n";
} else {
cout << "No\n";
}
}
return 0;
}
