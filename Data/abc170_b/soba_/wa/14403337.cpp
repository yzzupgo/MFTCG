#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y ;
cin >> x >> y;
if(y<=x*4 && y>= x*2 && y%2==0)
{
cout << "YES";
return 0;
}
cout << "NO";
return 0;
}
