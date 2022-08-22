#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;
void solve(long long N) {
if(floor(1.08 * float(N)) < 2.06e2) {
cout << "Yay!" << endl;
} else if(floor(1.08 * float(N)) == 2.06e2) {
cout << "so-so" << endl;
} else if(floor(1.08 * float(N)) > 2.06e2) {
cout << ":(" << endl;
}
}
int main() {
long long N;
std::scanf("%lld", &N);
solve(N);
return 0;
}
