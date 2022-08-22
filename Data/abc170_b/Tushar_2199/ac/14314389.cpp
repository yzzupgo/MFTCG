#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll total, legs;
cin >> total;
cin >> legs;
ll min = total * 2;
ll max = total * 4;
if (legs >= min && legs <= max && (legs % 2 == 0))
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
