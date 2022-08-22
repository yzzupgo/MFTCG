#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b; cin >> a >> b;
int y = (b - 2 * a) / 2;
int x = a - y;
if(x < 0 || y < 0 || (x * 2 + y * 4) != b) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
