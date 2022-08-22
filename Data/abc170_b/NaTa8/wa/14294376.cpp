#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
int crane = 4*X - Y;
if (crane > 0)
{
if (crane % 2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
else cout << "No" << endl;
}
