#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;
#define FOR(i,a,n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i,n) FOR(i, 0, n)
#define PRINT(str) printf(#str "\n")
#define yOUT PRINT(Yes)
#define nOUT PRINT(No)
#define YOUT PRINT(YES)
#define NOUT PRINT(NO)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
int main(){
int n, x;
cin >> n >> x;
int ans = 0;
if(x > 0) ans -= x;
else if(-x >= n) ans -= x + n - 1;
REP(i, n) ans += x+i;
cout << ans << endl;
}
