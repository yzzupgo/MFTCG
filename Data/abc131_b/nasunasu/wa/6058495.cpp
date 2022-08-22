#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <numeric>
#include <algorithm>
#include <tuple>
#include <math.h>
#include <iomanip>
typedef long long ll;
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int my_sum = l * n + (n*(n-1))/2;
bool cnd = true;
for (int i=0; i<n; ++i){
if (l + i >= 0){
cnd = true;
my_sum -= (l+i);
cnd = false;
}
}
if(cnd) my_sum -= l + n - 1;
cout << my_sum << endl;
return 0;
}
