#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if(y >= 2*x && y <= 4*x && y%2==0 && y!= 3*x)
{
cout << "YES";
}else
{
cout << "NO";
}
return 0;
}
