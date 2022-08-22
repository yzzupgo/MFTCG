#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
int swap(int a, int b) {
}
int gcd(int a, int b) {
if(a < b) swap(a, b);
if (b==0) return a;
return gcd(b, a%b);
}
int main() {
int N, L;
cin >> N >> L;
int first, last;
first = L;
last = L + N - 1;
int ans;
ans = (L-1)*N + N*(N+1)/2;
if ( first >= 0 ) {
ans -= first;
} else if ( last <= 0 ) {
ans -= last;
}
cout << ans << endl;
}
