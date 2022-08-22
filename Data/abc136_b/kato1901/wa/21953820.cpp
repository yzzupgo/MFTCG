#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main(){
int n;
cin >> n;
int ans = 0;
for(int i = 10; i <= n; i++){
if(i / 10 % 2 == 1) ans++;
}
cout << ans << endl;
return 0;
}
