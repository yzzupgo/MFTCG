#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rep2(i,x,n) for (int i = x; i < n; ++i)
int main()
{
int a,b;
cin >> a >> b;
int p = 0;
if(a>=13) p = b;
else if(a>=6) p = b/2;
cout << p << endl;
return 0;
}
