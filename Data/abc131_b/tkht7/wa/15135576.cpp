#include <iostream>
#include <string>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int ans;
if (l > 0) ans = (l+l+n) * (n-1) / 2;
else if (l + n < 0) ans = (l+l+n-2) * (n-1) / 2;
else ans = (l+l+n-1) * n / 2;
cout << ans << endl;
return 0;
}
