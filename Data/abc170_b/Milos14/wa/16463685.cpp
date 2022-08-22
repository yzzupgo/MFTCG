# include <iostream>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
if (Y / X >= 2 && Y/X <= 4 && Y%2==0 )
{
cout << "Yes";
}
else
cout << "No";
return 0;
}
