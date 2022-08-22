#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
int main()
{
int x, y ;
cin >> x >> y ;
int asi = x*4 ;
while(x>0)
{
asi -= 2 ;
x-- ;
if(asi==y)
{
cout <<"yes" << endl;
return 0;
}
}
cout << "no" << endl ;
}
