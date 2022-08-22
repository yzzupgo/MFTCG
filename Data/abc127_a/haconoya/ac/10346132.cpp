#include <bits/stdc++.h>
#define rep(i,n) for(int (i) = 0; (i) < (n); ++(i))
#define _Pi 3.1415926535
using namespace std;
typedef long long ll;
int main(){
int a,b;
cin >> a >> b;
if(a > 12) cout << b << endl;
else if(a > 5) cout << b/2 << endl;
else cout << 0 << endl;
return 0;
}
