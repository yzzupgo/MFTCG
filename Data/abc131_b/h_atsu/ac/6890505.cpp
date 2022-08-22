#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
#include <map>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
typedef pair<int,int> P;
const int inf = 1012345678;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int a[240];
int main(){
int n,l;
cin >> n >> l;
int sum = 0;
bool f = false;
rep(i,n){
a[i] = l + i;
sum += a[i];
if(a[i] == 0) f = true;
}
if(f) cout << sum << endl;
else{
if(l > 0) cout << sum -a[0] << endl;
else cout << sum - a[n-1] << endl;
}
return 0;
}
