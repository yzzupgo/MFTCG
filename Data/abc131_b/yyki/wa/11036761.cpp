#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l ;
cin >> n >> l ;
int total = 0;
int ans = 1000000;
for(int i=1;i<=n;i++)
{
total+=l+i-1 ;
if(ans>abs(l+i-1)) ans = abs(l+i-1);
}
cout << total-ans << endl;
return 0;
}
