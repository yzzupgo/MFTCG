#include <bits/stdc++.h>
using namespace std;
int main()
{
int X,Y;
cin >> X >> Y;
if (Y%2!=0) cout << "No";
else
{
int t=Y-2*X;
int tt=t/2;
int cr=(Y-tt*4)/2;
if(cr<0) cout << "No";
else
{
if((tt*4+(X-tt)*2==Y) && (tt+cr==X)) cout << "Yes";
else cout << "No";
}
}
}
