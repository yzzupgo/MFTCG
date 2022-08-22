#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
int j = 0;
for (int i = x; i >= 0 ; i--)
{
if ((i*2 + j*4) == y)
{
cout << "Yes" << endl;
return 0;
}
j++;
}
cout << "No" << endl;
return 0;
}
