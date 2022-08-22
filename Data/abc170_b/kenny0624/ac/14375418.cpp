#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
using P = pair<int,int>;
using pq = priority_queue<int>;
typedef long long ll;
int main()
{
int x,y; cin >> x >> y;
if (y % 2)
{
cout << "No" << endl;
return 0;
}
int t = x;
for (int i = 0; i <= x; i++)
{
if ((i*2) + ((t-i)*4) == y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return (0);
}
