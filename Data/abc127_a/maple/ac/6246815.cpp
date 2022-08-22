#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <memory.h>
#include <iomanip>
#include <bitset>
#include <list>
#include <stack>
#include <deque>
#include <numeric>
using namespace std;
#define mod 1000000007
int main(){
int a, b;
cin >> a >> b;
if(a <= 5) cout << 0 << endl;
else if(a <= 12) cout << b / 2 << endl;
else cout << b << endl;
}
