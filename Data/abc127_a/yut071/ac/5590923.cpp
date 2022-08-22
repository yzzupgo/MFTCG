#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int main(void) {
int a, b; cin >> a >> b;
if(a >= 13) cout << b << endl;
else if(a >= 6) cout << b/2 << endl;
else cout << 0 << endl;
return 0;
}
