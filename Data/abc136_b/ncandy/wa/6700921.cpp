#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <climits>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define INF INT_MAX>>1
#define SIZE 100010
#define MOD 1000000007
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep2(i,a,b) for(int i=(a); i<(int)(b); i++)
typedef long long ll;
using namespace std;
struct Point { int x, y; };
struct Edge { int to, cost; };
struct Node { int from, to, cost; };
int dx[] ={-1, 0, 0, 1};
int dy[] ={0, -1, 1, 0};
int gcd(int a, int b){ return a % b == 0 ? b : gcd(b, a%b); }
int lcm(int a, int b){ return a * b/ gcd(a, b); }
int extgcd(int a, int b, int& x, int& y){
int d = a;
if(b != 0){
d = extgcd(b, a%b, y, x);
y -= (a/b) * x;
} else{
x = 1; y = 0;
}
return d;
}
int main(void){
int n; cin >> n;
int ans = 0;
rep(i, n){
if(i < 10) ans++;
else if(100 <= i && i < 1000) ans++;
else if(10000 <= i && i < 100000) ans++;
}
if(n == 1000) ans--;
if(n == 100000) ans--;
cout << ans << endl;
return 0;
}
