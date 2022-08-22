#include <bits/stdc++.h>
using namespace std;
int a, b;
void Enter()
{
cin >> a >> b;
}
void Solve()
{
if (a <= 5)
cout < 0;
else if (6 <= a && a <= 12)
cout << b/2;
else
cout << b;
}
int main()
{
Enter();
Solve();
return 0;
}
