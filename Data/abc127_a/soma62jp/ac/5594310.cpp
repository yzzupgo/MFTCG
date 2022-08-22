#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
typedef long long LL;
typedef unsigned int UI;
#define rSort(a) sort(a.rbegin(),a.rend())
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define Sum(a) accumulate(a.begin(), a.end(), 0)
#define REP(i,n) for(UI i = 0;i < n;i++)
#define REPR(i,n) for(UI i = n;i >= 0;i--)
#define FOR(i,m,n) for(UI i = m;i < n;i++)
#define pb(i) push_back(i)
#define MOD (LL)1e9 + 7;
#define INF (LL)1 << 62;
int main(int argc, const char * argv[]) {
cin.tie(0);
ios::sync_with_stdio(false);
LL A,B;
LL ans = 0;
cin >> A >> B;
if(A>=13){
ans=B;
}else if(A>=6 && A<=12){
ans = B/2;
}else{
ans=0;
}
cout << ans << endl;
return 0;
}
