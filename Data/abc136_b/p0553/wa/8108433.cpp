#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
if(n < 100)
{
cout << n;
}
else if(n < 1000)
{
cout << n - 90;
}
else if(n < 10000)
{
cout << "909";
}
else if(n < 100000)
{
cout << n - 9090;
}
else
{
cout << "90909";
}
return 0;
}
