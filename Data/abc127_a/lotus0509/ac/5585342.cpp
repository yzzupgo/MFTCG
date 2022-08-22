#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
#define LINF 1000000000000000007
typedef long long i64;
typedef pair<i64,i64> P;
int a, b;
int main(){
cin >> a >> b;
if(a < 6) cout << 0 << endl;
else if(a < 13) cout << b/2 << endl;
else cout << b << endl;
return 0;
}
