#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main(){
int n;
cin >> n;
int ans = 0;
rep(i, n + 1){
int m = i;
int cnt = 0;
while(m > 0){
cnt++;
m /= 10;
}
if(cnt % 2) ans++;
}
cout << ans << endl;
}
