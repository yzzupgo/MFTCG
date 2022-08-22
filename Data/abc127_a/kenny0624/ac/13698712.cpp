#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
using namespace std;
using P = pair<int,int>;
typedef long long ll;
int main()
{
int a,b; cin >> a >> b;
if (a >= 13)
cout << b << endl;
else if (a <= 12 && a >= 6)
cout << b/2 << endl;
else
cout << 0 << endl;
return (0);
}
