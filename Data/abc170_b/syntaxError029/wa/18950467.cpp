#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n, legs;
cin >> n >> legs;
for(int i = 0; i <= n; i++)
{
if(i*3 + (n-i)*4 == legs)
{
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
return;
}
int main()
{
solve();
}
