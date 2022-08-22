#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long int t = 1;
while(t--)
{
long long x,y;
cin >> x >> y;
long long ans = 0;
for(long int i = 0;y-2*i >=0 && i<=x ;i++)
{
long long diff = y - 2*i;
if(diff%4 == 0)
{
if(diff/4 <= x)
ans = 1;
}
}
if(ans) cout << "Yes";
else cout << "No";
}
}
