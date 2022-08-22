#include <iostream>
#include <string>
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#include <vector>
using namespace std;
using ll = long long;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) cout << b << endl;
else if (a >= 6) cout << b / 2 << endl;
else cout << 0 << endl;
return 0;
}
