#include <bits/stdc++.h>
using namespace std;
int main()
{
int a , b;
cin >> a >> b;
for( int i = 1 , j ; i <= a ; i ++ )
{
j = a - i;
if( 2 * i + 4 * j == b )
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
