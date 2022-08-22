#include<iostream>
using namespace std;
#include<cstring>
int main()
{
int x, y;
cin >> x;
cin >> y;
string res = "No";
for (int i = 0; i < x + 1; i++)
{
int j = x - i;
if ( 2*i + 4*j == y)
res = "Yes";
}
cout << res << endl;
return 0;
}
