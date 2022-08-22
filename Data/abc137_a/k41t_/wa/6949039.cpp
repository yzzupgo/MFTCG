#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int a,b;
cin >> a >> b;
int p,i,x;
p = abs(a+b);
i = abs(a-b);
x = abs(a*b);
cout << max(p,max(i,x));
return 0;
}
