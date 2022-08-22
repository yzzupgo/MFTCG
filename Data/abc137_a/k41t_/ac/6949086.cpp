#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int a,b;
cin >> a >> b;
int p,i,x;
p = a+b;
i = a-b;
x = a*b;
cout << max(p,max(i,x));
return 0;
}
