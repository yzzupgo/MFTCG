#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if (y<2*x || y>4*x) cout<<"No";
else if (y%2==1) cout<<"No";
else cout<<"Yes";
}
