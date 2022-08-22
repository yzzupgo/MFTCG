#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n);i++)
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int ans = 0;
ans = max(ans, a * b);
ans = max(ans, a + b);
ans = max(ans, a - b);
cout << ans << endl;
}
