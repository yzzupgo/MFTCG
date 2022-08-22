#include <bits/stdc++.h>
#include <sstream>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second
void Main() {
int x, y;
cin >> x >> y;
FOR(i,0,x) {
int j = x - i;
if (2 * i + 4 * j == y) {
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
Main();
return 0;
}
