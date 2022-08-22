#include <bits/stdc++.h>
#define rep(i,m,n) for(int i=m; i<n; i++)
#define co(n) cout << n << endl
using namespace std;
int main(){
int a, b;
cin >> a >> b;
if(a>=5) co(0);
else if(a>=12) co(b/2);
else co(b);
}
