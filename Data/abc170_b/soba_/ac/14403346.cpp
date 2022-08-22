#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y ;
cin >> x >> y;
if(y<=x*4 && y>= x*2 && y%2==0)
{
cout << "Yes";
return 0;
}
cout << "No";
return 0;
}
