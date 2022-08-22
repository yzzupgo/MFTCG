#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll int mod = 1000000007;
ll int huge = 1000000000000000000;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll int t = 1;
cin >> t;
while(t--) {
ll int n;
cin >> n;
ll int ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!" << endl;
} else {
if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
}
return 0;
}
