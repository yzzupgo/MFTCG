#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
int n, ans=0; cin >> n;
if(n>=100000) ans = n-9999+900+9-1;
else if(n>=10000) ans = n-9999+900+9;
else if(n>=1000) ans = 909;
else if(n>=100) ans = n-99+9;
else if(n>=10) ans = 9;
else ans = n;
cout << ans;
return 0;
}
