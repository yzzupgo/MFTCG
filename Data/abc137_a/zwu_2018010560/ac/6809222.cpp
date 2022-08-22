#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,x,y,z,n,m;
cin >> a >> b;
x = a+b;
y = a-b;
z = a*b;
n = max(x,y);
m = max(n,z);
cout << m;
return 0;
}
