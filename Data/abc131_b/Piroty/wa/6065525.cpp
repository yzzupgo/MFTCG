#include<iostream>
#include <stdlib.h>
using namespace std;
int h = 0;
int main()
{
int N;
int L;
int min = 200;
int sum = 0;
int r = 0;
cin >> N;
cin >> L;
for (int i = 0; i < N; i++)
{
r = L + i;
if (min > abs(r))
{
min = r;
h = i;
}
else if (r == 0)
{
h = i;
break;
}
}
for (int j = 0; j < N; j++)
{
if (j == h)
{
}
else
{
sum = sum + L + j;
}
}
cout << sum << endl;
return 0;
}
