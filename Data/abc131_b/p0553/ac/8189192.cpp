#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin >> n >> l;
int sum = 0;
if(l <= 0 && l + n >= 1)
{
for(int i = 0;i < n;i++)
{
sum += l + i;
}
cout << sum;
}
else if(l > 0)
{
for(int i = 1;i < n;i++)
{
sum += l + i;
}
cout << sum;
}
else
{
for(int i = 0;i < n - 1;i++)
{
sum += l + i;
}
cout << sum;
}
return 0;
}
