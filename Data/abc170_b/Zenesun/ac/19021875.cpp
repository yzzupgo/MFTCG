#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int x, y;
cin >> x >> y;
if(y % 2 == 0 && y >= 2 * x && y <= 4 * x) cout << "Yes";
else cout << "No";
return 0;
}
