#include<bits/stdc++.h>
using namespace std;
int main()
{
int i, x, y, ck = 0;
cin >> x >> y;
for(i=1; i<=x; i++)
{
if(2*i+4*(x-i) == y)
{
ck = 1;
break;
}
}
if(ck) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
