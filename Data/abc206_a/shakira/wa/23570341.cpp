#include <bits/stdc++.h>
using namespace std;
#define mash void
#define please 0
mash potato() {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!" << '\n';
} else if(1.08 * n == 206) {
cout << "so-so" << '\n';
} else {
cout << ":(" << '\n';
}
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
int tt = 1;
while(tt--) {
potato();
}
return please;
}
