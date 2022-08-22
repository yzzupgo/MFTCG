#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll a,b;
cin>>a>>b;
if (a>=13)
cout<<b;
else if (a>=6 and a<=12)
cout<<b/2;
else
cout<<0;
}
