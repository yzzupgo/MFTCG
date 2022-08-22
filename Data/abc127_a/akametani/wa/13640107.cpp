#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int a,b;
cin >> a >> b;
if(a <= 5) cout << 0 << endl;
if(6 <= a && a <= 12) cout << b/2 << endl;
else cout << b << endl;
return 0;
}
