#include<bits/stdc++.h>
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int ans = floor(n * 1.08);
if(ans < 206) {
cout << "Yay!\n";
} else if(ans > 206) {
cout << ":(\n";
} else if(ans == 206) {
cout << "so-so\n";
}
return 0;
}
