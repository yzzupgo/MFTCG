#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++)
{
for (int t = 0; t <= X; t++)
{
if(i * 2 + t * 4 == Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
