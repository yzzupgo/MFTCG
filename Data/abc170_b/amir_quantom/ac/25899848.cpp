#include <algorithm>
#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;
#define pb push_back
typedef long long ll;
typedef long double ld;
#define si(x) (int)x.size()
#define all(x) x.begin(), x.end()
int x, y;
void solve (){
cin >> x >> y;
for (int i = 0; i <= 100; i ++){
for (int j = 0; j <= 100; j ++){
if ((i + j) == x and i * 2 + j * 4 == y){
cout << "Yes";
return;
}
}
}
cout << "No";
}
int main () {
ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
int tc = 1;
while (tc --) {
solve();
}
return 0;
}
