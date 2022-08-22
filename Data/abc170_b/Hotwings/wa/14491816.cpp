#include<iostream>
using namespace std;
#include<cstring>
int main()
{
int x, y;
cin >> x;
cin >> y;
string res = "NO";
for (int i = 0; i < x + 1; i++)
{
int j = x - i;
if ( 2*i + 4*j == y)
res = "YES";
}
cout << res << endl;
return 0;
}
