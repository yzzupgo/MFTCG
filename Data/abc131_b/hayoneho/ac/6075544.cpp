#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
#define pb(a) push_back(a)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
typedef long long unsigned int ll;
typedef pair<ll, ll> P;
int main(){
int n,l;
cin >> n >> l;
int aji[n];
int sum = 0;
REP(i,n){
aji[i] = l+i;
sum += aji[i];
}
int res;
if(l>=0){
res = sum-aji[0];
}else if(n>-l){
res = sum;
}else{
res = sum-aji[n-1];
}
cout << res << endl;
return 0;
}
