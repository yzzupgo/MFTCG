#include <iostream>
#include<sstream>
#include<string>
#include<vector>
#include <cmath>
#include <limits>
#include <queue>
#include<algorithm>
#include<cstring>
#include <cstdlib>
#include <cstdio>
#include <set>
#include <iomanip>
#include <map>
#include <stack>
#include <memory>
#include <numeric>
#include <type_traits>
using namespace std;
#define rep(i,n) for (int (i)=0;(i)<(n);i++)
typedef long long ll;
const int MAXV = 1e9;
int main(){
int X, Y; cin >> X >> Y;
bool ans;
rep(i,X+1){
if (i*2+(X-i)*4 == Y){
ans = true;
}
}
if (ans) cout << "Yes";
else cout << "No";
return 0;
}
