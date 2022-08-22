#include <iostream>
using namespace std;
int main(void)
{
int n,l;
cin >> n >> l;
int l2 = l;
int ans = 0;
for(int i=0;i<n;i++){
ans += l2;
l2++;
}
if(l>=0) ans -= l;
else if(l2 >= 0) ans;
else if(l2 < 0) ans = ans + 1 - l2;
cout << ans << endl;
return 0;
}
