#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if((x%2!=0) && (y%2==0))
cout << "Yes" << endl;
else if((x%2==0) && (y%2==0) || (x%2!=0) && (y%2!=0))
cout << "No" << endl;
return 0;
}
