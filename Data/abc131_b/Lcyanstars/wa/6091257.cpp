#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin >> n >> l;
if(l>=0)
cout << (l-1)*(n-1)+(2+n)*(n-1)/2;
else
if(n+l+1<0)
cout << (l-1)*(n-1)+n*(n-1)/2;
else
cout << (l-1)*(n-1)+(1+n)*n/2+(1-l);
return 0;
}
