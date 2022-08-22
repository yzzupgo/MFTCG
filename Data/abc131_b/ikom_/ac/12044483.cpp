#include<bits/stdc++.h>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int ans = 0;
int c;
if(l - 1 >= 0){
for(int i = 2; i <= n; ++i) ans += l - 1 + i;
}
else {
c = abs(l - 1) > n ? n : abs(l - 1);
for(int i = 1; i <= n; ++i){
if(c == i) continue;
ans += l - 1 + i;
}
}
cout << ans << endl;
}
