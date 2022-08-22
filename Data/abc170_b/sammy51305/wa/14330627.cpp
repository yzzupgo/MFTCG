#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define mp make_pair
#define ll long long
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pb push_back
#define ary array
#define Yes cout << "Yes" <<endl;
#define No cout << "No" << endl;
int main() {
fastio
int X,Y;
cin >> X >> Y;
int b = (Y-2*X)/2;
if(b > X) cout << "No";
else cout << "Yes";
return 0;
}
