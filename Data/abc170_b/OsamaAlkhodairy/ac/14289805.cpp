#include <bits/stdc++.h>
using namespace std;
#define finish(x) return cout << x << endl, 0
#define ll long long
int x, y;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cin >> x >> y;
if(y % 2 == 0 && 2 * x <= y && y <= 4 * x) cout << "Yes\n";
else cout << "No\n";
}
