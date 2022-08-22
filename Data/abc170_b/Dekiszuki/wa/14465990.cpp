#include<bits/stdc++.h>
using namespace std;
int main()
{
int x , y;
cin >> x >> y ;
int c = ( 4 * x ) - y;
int t = y - ( 2 * x );
if( c < 0 || t < 0 ) cout << "NO";
else cout << "YES";
}
