#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
#define LINF 1000000000000000007
typedef long long i64;
typedef pair<i64,i64> P;
int n, a;
int main(){
cin >> n >> a;
int cnt = 0, ans = INF, ans2 = INF;
for(int i = a; i < n+a; i++){
if(ans2 > abs(i)){
ans = i;
ans2 = abs(i);
}
cnt += i;
}
cout << cnt-ans << endl;
return 0;
}
