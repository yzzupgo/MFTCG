#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l ;
cin >> n >> l ;
int total = 0;
for(int i=0;i<n;i++)
{
total+=l+i ;
}
int ans = 1000000;
for(int i=0;i<n;i++){
if(ans>abs(l+i)) ans = abs(l+i);
}
cout << total-ans << endl;
return 0;
}
