#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (2*x <= y && (y-2*x)%2 < 1 && y <= 4*x && (4*x-y)%2 < 1)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
