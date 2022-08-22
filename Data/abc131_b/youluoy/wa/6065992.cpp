#include<cstdio>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<stack>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define int long long
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef priority_queue<pii, vector<pii>, greater<pii> > RPQ;
#define mk make_pair
#define INF (1 << 30)
#define INFL (1ll << 60ll)
#define mod 1000000007
int N, L;
int mn = INF;
int abss(int A){
if(A < 0)return -A;
else return A;
}
signed main(){
cin >> N >> L;
int ans = 0;
for(int i = 0; i < N; i++){
ans += L + i;
}
int res = ans;
cout << res << endl;
for(int i = 0; i < N; i++){
if(mn > abss(res - (res - (L + i)))){
ans = res - (L + i);
mn = abss(res - (res - (L + i)));
}
}
cout << ans << endl;
return 0;
}
