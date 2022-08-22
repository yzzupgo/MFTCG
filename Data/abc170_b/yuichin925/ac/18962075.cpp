#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
bool flag = false;
int t = 2, k = 4;
for (int i = 0; i <= X && !flag; i++)
{
for (int j = 0; j <= X; j++)
{
if(i + j == X && t * i + k * j == Y) {
flag = true;
break;
}
}
}
cout << (flag ? "Yes" : "No") << endl;
}
