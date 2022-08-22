#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
using P = pair<int,int>;
using pq = priority_queue<int>;
typedef long long ll;
string y = "Yes";
string n = "No";
int main()
{
int x, y; cin >> x >> y;
bool ans = false;
for (int i = 0; i <= x; i++)
{
for (int j = 0; j <= x; j++)
{
if (i+j == x && (i*2) + (j*4) == y)
ans = true;
}
}
if (ans)
cout << "Yes" << endl;
else
cout << "No" << endl;
return (0);
}
