#include<bits/stdc++.h>
using namespace std;
struct compare
{
bool operator()(const int& first, const int& second)
{
return first>second;
}
};
void solve()
{
long long a, b;
cin>>a>>b;
int x= a*b;
int y = a+b;
int z= a-b;
int mx = max(x,y);
cout<<max(z,mx)<<endl;
}
int main()
{
int t;
t=1;
while(t--)
{
solve();
}
}
