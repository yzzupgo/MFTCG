#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b; cin >> a >> b;
if (a>=13) cout << b;
else if (6 < a&&a < 13) cout << b/2;
else if (a<6) cout << 0;
}
