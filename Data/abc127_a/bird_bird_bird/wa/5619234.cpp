#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,ans;
cin >> a >> b ;
if( a < 5 ) ans = 0;
else if( a < 13 ) ans = b/2;
else ans = b;
cout << ans << endl;
return 0;
}
