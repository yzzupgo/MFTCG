#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
int n, l;
cin>>n>>l;
if(l >= 0)cout<<(2*l+n-1)*n/2 - l << endl;
else if (l + n - 1 >= 0) cout<<(2*l+n-1)*n/2 << endl;
else cout<<(2*l+n-1)*n/2 - (n+l-1) << endl;
return 0;
}
