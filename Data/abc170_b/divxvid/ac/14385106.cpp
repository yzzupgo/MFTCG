#include <bits/stdc++.h>
using namespace std ;
int main()
{
int x , y ;
cin >> x >> y ;
for(int i = 0 ; i <= x ; ++i)
{
int j = x - i ;
if(2*i + 4*j == y)
{
cout << "Yes\n" ;
return 0 ;
}
}
cout << "No\n" ;
}
