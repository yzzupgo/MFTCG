#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define dbg(x) cerr << #x << " = " << x << endl
#define _ << ' ' <<
using namespace std;
using ll = long long;
using vi = vector<int>;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int a, b;
cin >> a >> b;
if (a <= 5)
cout << 0;
else if (a <= 13)
cout << b / 2;
else
cout << b;
}
