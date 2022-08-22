#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
typedef long long ll;
int main(){
int N,L;
cin >> N >> L;
int a=1e9;
int ans = 0;
for(int i=1; i<=N; i++){
ans += L+i-1;
if(abs(a)>abs(L+i-1)) a = L+i-1;
}
cout << ans - a << endl;
return 0;
}
