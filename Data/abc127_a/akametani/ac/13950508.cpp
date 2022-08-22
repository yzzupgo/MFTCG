#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int a,b;
cin >> a >> b;
int ans = 0;
if(6 <= a && a <= 12) ans = b/2;
else if(12 <= a) ans = b;
cout << ans << endl;
}
