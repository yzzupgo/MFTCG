#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int p = 1.08 * n;
if(p < 206) {
cout << "Yay!";
} else if(p == 206) {
cout << "50-50";
} else {
cout << ":(";
}
return 0;
}
