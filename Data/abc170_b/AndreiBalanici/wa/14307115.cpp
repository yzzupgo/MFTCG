#include <bits/stdc++.h>
using namespace std;
ifstream f("A.in");
typedef long long ll;
int main()
{
ll X,Y,a,b;
cin>>X>>Y;
if(Y%2==0 )
{
a=(2*X)-(Y/2);
b=(Y/2)-X;
if(a>=0&&b>=0) cout<<"YES";
else cout<<"NO";
}
else cout<<"NO";
}
