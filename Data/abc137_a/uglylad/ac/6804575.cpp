#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
#define F first
#define S second
#define pb emplace_back
#define M 1000000007
#define watch(x) cout << (#x) << " is " << (x) << endl
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fr(i,a,b) for(int i = a; i<= b; i++)
#define all(c) c.begin(), c.end()
main() {
IOS;
int a, b;
cin >> a >> b;
cout << max(max(a+b,a-b), a*b);
}
