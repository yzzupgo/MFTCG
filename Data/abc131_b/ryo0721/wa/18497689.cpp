#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using LL = long long;
using P = pair<int,int>;
int main(){
int N, L;
cin >> N >> L;
int sum = N*(L-1) + 0.5 * N * (N+1);
int diff = abs(L);
int ans = sum - L;
for(int i = 0; i < N; ++i){
if(abs(L)>abs(i+L)) {
ans = sum - (i+L);
diff = abs(i+L);
}
}
cout << ans << endl;
return 0;
}
