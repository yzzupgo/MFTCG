#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9+7;
int main(){
int a, b;
cin >> a >> b;
if(a>=13) cout << b << endl;
else if(a<=6 && a<=12) cout << b/2 << endl;
else if(a<=5) cout << 0 << endl;
return 0;
}
