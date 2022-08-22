#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y; cin >> x >> y;
for(int i = 0; i <= 50; i++)
{
int n = y - i*2;
if(n%4 == 0 and n/4+i == x)
return !(cout << "YES" << endl);
}
cout << "No" << endl;
return 0;
}
