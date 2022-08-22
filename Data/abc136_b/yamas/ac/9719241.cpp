#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(void){
int n, ans = 0;
cin >> n;
int k = 0, tmp = n;
while(tmp > 0){
tmp /= 10;
k++;
}
if(k == 1) ans += n%10;
if(k == 2) ans += 9;
if(k == 3) ans += n-100 + 9 + 1;
if(k == 4) ans += 900 + 9;
if(k == 5) ans += n-10000 + 900 + 9 + 1;
if(k == 6) ans += 90000 + 900 + 9;
cout << ans << endl;
return 0;
}
