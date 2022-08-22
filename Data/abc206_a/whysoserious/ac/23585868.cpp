#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
using namespace std;
typedef long long int ll;
void solve() {
long double n;
cin >> n;
n = n * 1.08;
int x = n;
if(x < 206) {
cout << "Yay!\n";
} else if(x == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
FAST_IO
int t = 1;
while(t--) {
solve();
}
return 0;
}
