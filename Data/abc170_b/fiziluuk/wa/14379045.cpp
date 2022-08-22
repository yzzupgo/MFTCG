#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b; cin >> a >> b;
int y = (b - 2 * a) / 2;
int x = a - y;
if(y < 0 || x < 0) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
