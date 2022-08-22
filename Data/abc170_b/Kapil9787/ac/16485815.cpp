#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define li int64_t
int main()
{
int x,y;
cin>>x>>y;
if((y-2*x)%2 == 0 && (4*x-y)%2 == 0 && y-2*x >= 0 && 4*x -y >=0)cout<<"Yes";
else
{
cout<<"No";
}
}
