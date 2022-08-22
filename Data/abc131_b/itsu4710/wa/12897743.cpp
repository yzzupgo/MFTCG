#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using p = pair<int, int>;
#define INF 1001001001
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repX(i,n,x) for (int i = x; i < (int)(n); i++)
#define repBack(i,n) for (int i = n; i >= 0; i--)
#define dup(x,y) (((x)+(y)-1)/(y))
int main() {
int N,L;
cin >> N >> L;
int sum = 0;
repX(i,N+1,1){
sum += L + i - 1;
}
int x = INF;
repX(i, N + 1, 1)
{
x = min(x, L+i-1);
}
int ans = sum - x;
cout << ans << endl;
return 0;
}
