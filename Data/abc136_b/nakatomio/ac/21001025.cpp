#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
if(i < 10) ans++;
else if(99 < i && i < 1000) ans++;
else if(9999 < i && i < 100000) ans++;
}
cout << ans << endl;
}
