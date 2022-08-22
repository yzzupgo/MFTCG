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
if(n >= 10) ans+= 9;
if(n >= 1000) ans += 900;
if(n >= 100000) ans += 90000;
if(n / 10000 > 0 && n < 100000){
ans += n%10000;
ans++;
cout << ans << endl;
return 0;
}
if(n / 100 > 0 && n < 1000){
ans += n%100;
ans++;
cout << ans << endl;
return 0;
}
if(n / 1 > 0 && n < 10){
ans += n%100;
cout << ans << endl;
return 0;
}
cout << ans << endl;
return 0;
}
