#include<bits/stdc++.h>
using namespace std;
#define lln long long int
#define MOD 1000000007
#define INF (lln) 1e18
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
cin.tie(NULL);
cout.tie(NULL);
ios_base::sync_with_stdio(false);
int n;
cin >> n;
double ans = (1.08) * n;
int res = int(ans);
if(res < 206) {
cout << "Yay!";
} else if(res == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
