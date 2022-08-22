#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5+5 , M = 1e3+5, OO = 0x3f3f3f3f;
typedef long long ll;
int n;
int main()
{
cin >> n;
if(n <= 9) cout << n << endl;
else if(n < 100) cout << 9 << endl;
else if(n <= 999) cout << n-100+10;
else if(n < 10000) cout << 909 << endl;
else if(n <= 99999) cout << n-10000+910;
else cout << 90909 << endl;
return 0;
}
