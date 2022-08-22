#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
int main(){
int n;
cin >> n;
int ans = 0;
for(int i = 1;i<=n;i++){
int cnt = 0;
int j = i;
while(j){
j /= 10;
cnt++;
}
if(cnt%2!=0) ans++;
}
cout << ans << endl;
return 0;
}
