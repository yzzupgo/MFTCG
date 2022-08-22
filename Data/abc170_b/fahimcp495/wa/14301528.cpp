#include<bits/stdc++.h>
using namespace std;
#define ___ ios::sync_with_stdio(0), cin.tie(0);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'
typedef long long ll;
int main(){___
int x, y; cin >> x >> y;
if(4*x-y >=0 and (4*x-y)%2==0 ) printf("Yes\n");
else printf("No\n");
return 0;
}
