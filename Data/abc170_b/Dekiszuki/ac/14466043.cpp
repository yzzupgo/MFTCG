#include<bits/stdc++.h>
using namespace std;
int main()
{
int x , y;
cin >> x >> y ;
int c = ( 4 * x ) - y;
int t = y - ( 2 * x );
if( c < 0 || t < 0 || c % 2 || t % 2 ) cout << "No";
else cout << "Yes";
}
