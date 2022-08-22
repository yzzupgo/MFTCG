#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n, legs;
cin >> n >> legs;
for(int i = 0; i <= n; i++)
{
if(i*3 + (n-i)*2 == legs)
{
cout << "Yes";
return;
}
}
cout << "No";
return;
}
int main()
{
solve();
}
