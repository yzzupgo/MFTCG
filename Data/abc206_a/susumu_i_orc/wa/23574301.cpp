#pragma GCC optimize("O3")
#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,a,b) for(ll i=a;i<ll(b);i++)
#define REP(i,n) FOR(i,0,n)
#define MOD 10e9+7
using namespace std;
int main() {
int i, j, k;
int A, B, C;
cin >> A;
if(A * 1.08 < 206) {
cout << "Yay!";
} else if(A * 1.08 == 206) {
cout << "so-so";
} else if(A * 1.08 > 206) {
cout << ":(";
}
return 0;
}
