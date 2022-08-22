#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
int main()
{
int x, y ;
cin >> x >> y ;
int asi = x*4 ;
for (int i = 0; i < x; i++)
{
asi -= 2 ;
if(asi==y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl ;
}
