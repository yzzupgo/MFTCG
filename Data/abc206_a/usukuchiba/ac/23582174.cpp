#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rem(i,m,n) for (int i = m; i < (n); i++)
#define eps (1e-7)
#define inf (1e9)
#define pi (acos(-1))
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
int a = n * 1.08;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
