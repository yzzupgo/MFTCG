#include<bits/stdc++.h>
#define ll long long int
#define pii pair<ll,ll>
#define F first
#define S second
#define pb push_back
#define np next_permutation
#define mod 1000000007
#define google(it) cout <<"Case #"<<it<<": ";
using namespace std;
void solve() {
double x;
cin >> x;
x = 1.08 * x;
if((int)x < 206) {
cout << "Yay!" << endl;
} else if((int)x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
cin >> t;
for(int it = 1; it <= t; it++) {
solve();
}
return 0;
}
