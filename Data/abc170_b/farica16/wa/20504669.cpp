#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
bool t=false;
if(y%2==0 && y>6)
t=true;
if(y==2 && x==1)
t=true;
if(t=true) cout << "Yes";
else cout << "No";
return 0;
}
