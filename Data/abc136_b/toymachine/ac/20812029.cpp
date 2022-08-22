#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int ans = 0;
for(int i=1;i<=n;i++){
int x = i;
int cnt = 0;
while(x > 0){
x /= 10;
cnt++;
}
if(cnt % 2 == 1) ans++;
}
cout << ans;
}
