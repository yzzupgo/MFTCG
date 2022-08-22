#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int ans;
ans = n * (l + l + n - 1) / 2;
if(l*(l+n-1)<=0){
ans = n * (l + l + n - 1) / 2;
}
else{
ans = ans - min(abs(l), abs(l + n - 1)) * l / abs(l);
}
cout << ans <<"\n";
return 0;
}
