#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <tuple>
#include <cassert>
#include <bitset>
using namespace std;
int main() {
long long int X, Y;;
string ans;
cin >> X >> Y;
ans = "No";
for (size_t i=1; i<=X; i++){
if ( ( 2*i + 4*(X-i) ) == Y){
ans = "Yes";
break;
}
else {
continue;
}
}
cout << ans << endl;
return 0;
}
