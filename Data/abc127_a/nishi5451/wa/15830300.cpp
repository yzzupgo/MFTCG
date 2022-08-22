#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
int main(){
int a,b;
cin >> a >> b;
if(b>=13) cout << b << endl;
else if(b<=5) cout << 0 << endl;
else cout << b/2 << endl;
return 0;
}
