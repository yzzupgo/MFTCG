#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
int main(){
int a,b; cin>>a>>b;
if(a>=5 && a<13) cout << b/2 << endl;
else if(a>=13) cout << b << endl;
else cout << 0 << endl;
return 0;
}
