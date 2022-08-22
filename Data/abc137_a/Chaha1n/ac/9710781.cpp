#include <bits/stdc++.h>
using namespace std;
int main()
{
long a,b;
cin >> a>>b;
long ans=a+b;
if(a-b>ans)
ans=a-b;
if(a*b>ans)
ans=a*b;
cout << ans << endl;
}
