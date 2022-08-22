#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main(){
int n;
cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
int a = 0;
for(int j = 1; j <= 10; j++){
a += 1;
int res = pow(10, j);
if(i / res == 0) break;
}
if(a % 2 == 1) ans++;
}
cout << ans << endl;
return 0;
}
