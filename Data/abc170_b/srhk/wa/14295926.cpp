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
int tsuru = legs / 2;
if(tsuru * 2 + (x - tsuru) * 4 == y) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
