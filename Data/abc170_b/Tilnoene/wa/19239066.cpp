#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define INF 1e9
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
if(y % 2 == 0){
if(x * 4 >= y && floor(x / 2) <= y)
cout << "Yes" << endl;
else
cout << "No" << endl;
} else
cout << "No" << endl;
return 0;
}
