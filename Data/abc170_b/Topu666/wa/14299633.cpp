#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if(y >= 2*x && y <= 4*x && y%2==0)
{
cout << "YES";
}else
{
cout << "NO";
}
return 0;
}
