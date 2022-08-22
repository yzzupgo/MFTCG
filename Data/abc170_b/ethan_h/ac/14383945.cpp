#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int b=(y-2*x)/2;
if((y-2*x) % 2 == 0 && ((b>=0&& b<=x) && (x-b>=0 && x-b<=x)))
{cout<<"Yes";}
else
{cout<<"No";}
return 0;
}
