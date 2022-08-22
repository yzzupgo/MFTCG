#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin >> n>> l;
if(l<=0 && n+l-1>=0) cout << ((n+2*l-1)*n)/2;
else if(l<0) cout << ((n+2*l-1)*n)/2-n+l-1;
else cout << ((n+2*l-1)*n)/2-l;
return 0;}
