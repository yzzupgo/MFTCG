#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) (x).begin(),(x).end()
#define rall(v) (v).rbegin(), (v).rend()
#define INF 1000000000
#define pow(x) pow(10,(x))
typedef long long int LL;
const int MOD = 1000000007;
int main(){
int A,B;cin >> A >> B;
int tmp1,tmp2,tmp3;
tmp1 = A+B;
tmp2 = A-B;
tmp3 = A*B;
int ans = max(tmp1,tmp2);
ans = max(ans,tmp3);
cout << ans << endl;
}
