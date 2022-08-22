#include <bits/stdc++.h>
using namespace std;
int sum(int num)
{
return (num*(num+1))/2;
}
int main() {
int n,l;
cin >> n >> l;
if(l>=0)
{
cout << sum(n+l-1)-sum(l) << endl;
}
else
{
if(n+l>=1)
cout << sum(n+l+1)-sum(l) << endl;
else
cout << -(sum(-l)-sum(-l-n)) << endl;
}
return 0;
}
