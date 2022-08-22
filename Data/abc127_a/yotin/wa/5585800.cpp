#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define f first
#define s second
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main() {
IOS;
int a,b;
cin>>a>>b;
if(a>=13){
cout << b << endl;
}
else if(a >=5){
cout << b/2 << endl;
}
else
cout << 0 ;
return 0;
}
