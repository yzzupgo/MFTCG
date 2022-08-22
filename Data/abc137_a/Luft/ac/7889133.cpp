#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i) = 0; (i) < (n); ++(i))
#define rrep(i,n) for(int (i) = (n) - 1; (i) >= 0; --(i))
#define nfor(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define rfor(i,a,b) for(int (i) = (b); (i) >= (a); --(i))
int main()
{
int a,b,ans;
cin >> a >> b;
ans = a + b;
if (ans < a - b) {
ans = a-b;
}
if(ans < a * b){
ans = a*b;
}
cout << ans << endl;
return 0;
}
