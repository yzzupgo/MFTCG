#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solveTestCase()
{
int a, b;
cin >> a >> b;
int res = a*b;
if((res/(a*2)) <= (a*2)) {
cout << "Yes\n";
}
else {
cout << "No\n";
}
}
int32_t main()
{
solveTestCase();
return 0;
}
