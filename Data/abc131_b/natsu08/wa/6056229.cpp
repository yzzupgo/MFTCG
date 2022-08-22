#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main() {
int N, L; cin >> N >> L;
int ans = 0;
rep(i, N){
if(i!=0) ans += L + i;
}
cout << ans << endl;
return 0;
}
