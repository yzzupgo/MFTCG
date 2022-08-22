#include <bits/stdc++.h>
using namespace std;
#ifdef ENABLE_DEBUG_OUTPUT
#define DEBUG_LOG(s) cout << s << endl;
#else
#define DEBUG_LOG(s) void();
#endif
int main(){
int x, y;
cin >> x >> y;
int legs = (4 * x - y);
if(legs < 0) {
cout << "No" << endl;
return 0;
}
int crane = legs / 2;
if(crane > x) {
cout << "No" << endl;
return 0;
}
if(crane * 2 + (x - crane) * 4 == y) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
