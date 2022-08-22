#include <bits/stdc++.h>
#define MOD (long long)(1E9+7)
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(a>=13) cout << b << endl;
else if(a>=5) cout << b/2 << endl;
else cout << 0 << endl;
}
