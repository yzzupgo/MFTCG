#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using str = string;
using ll = long long;
using vi = vector<int>;
using vii = vector<vi>;
int main() {
int x, y;
cin >> x >> y;
bool a = false;
for(int i = 0; i <=100; i++) {
if(i*2 + (x-i)*4 == y) {
a = true;
break;
}
}
if(a) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
