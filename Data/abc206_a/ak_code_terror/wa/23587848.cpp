#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
double T;
cin >> T;
int ans = (1.08 * T);
cout << ans;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
