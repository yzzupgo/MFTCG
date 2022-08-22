#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<cstring>
#define mes(a,b) memset(a, b, sizeof a)
#define pb push_back
typedef unsigned long long int ull;
typedef long long int ll;
const int maxn = 1e5 + 20;
const int maxm = 1e5 + 10;
const ll mod = 1e9 + 7;
const ll INF = 1e18 + 100;
const int inf = 0x3f3f3f3f;
const double pi = acos(-1.0);
const double eps = 1e-8;
using namespace std;
int main(){
int x,y;cin >> x >> y;
if(x * 2 <= y && y <= x * 4) puts("Yes");
else puts("No");
}
