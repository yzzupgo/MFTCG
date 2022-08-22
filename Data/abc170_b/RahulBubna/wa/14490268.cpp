#include <bits/stdc++.h>
#define dhai_machli ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define loop(i,n) for(int i=0; i<n; i++)
using namespace std;
int main()
{
dhai_machli;
int x, y;
cin >> x >> y;
for (int i = 1; i <= x; i++)
{
for (int j = 0; j <= x; j++)
{
if (2 * i + 4 * j == y)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout<<"No"<<endl;
return 0;
}
