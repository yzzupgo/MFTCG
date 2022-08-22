#include <iostream>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
string result = "No";
for(int i = 0; i <= x; ++i)
{
for(int j = 0; j <= x; ++j)
{
if(2*i+4*j == y)
{
result = "Yes";
}
}
}
cout << result << endl;
}
