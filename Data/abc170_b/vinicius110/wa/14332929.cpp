#include <iostream>
#include <algorithm>
using namespace std;
int v[101], n, x, i;
int Bsearch (int k)
{
int max = n, min = 0, middle;
while(min <= max)
{
middle = (max + min)/2;
if(v[middle] == k)
{
return 0;
}
else if(v[middle] > k)
{
max = middle - 1;
}
else
{
min = middle + 1;
}
}
return 1;
}
int main ()
{
cin >> x >> n;
if(n == 0)
{
cout << x << endl;
}
else
{
for(i = 0; i < n; i++)
{
cin >> v[i];
}
sort(v, v+n);
for(i = 1; i < x; i++)
{
if(Bsearch(x-i))
{
cout << x-i << endl;
break;
}
else if(Bsearch(x+i) && x+i <= 100)
{
cout << x+i << endl;
break;
}
}
}
return 0;
}
