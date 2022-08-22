#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <forward_list>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define EPS 1e-9
#define N 1000005
using namespace std;
int x, y;
bool solve(){
for(int i=0; i<=x; ++i)
for(int j=0; j<=x - i; ++j) {
if(i * 3 + j * 2 == y) return true;
}
return false;
}
int main(){
cin>>x>>y;
if(solve()) cout<<"Yes"<<'\n';
else cout<<"No"<<'\n';
}
