#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef long double ld;
const int N = 2e5 + 5, K = 21, M = 5e4 + 5, mod = 1e9 + 7, len = 30, inf = 0x3f3f3f3f;
void run_case() {
double n;
cin >> n;
if(floor(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(floor(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ": (" << endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int T = 1;
while(T--) {
run_case();
}
}
