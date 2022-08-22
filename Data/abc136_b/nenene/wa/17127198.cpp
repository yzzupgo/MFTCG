#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
int ans = 0;
for(int i=1;i<n+1;i++){
if(i%10 == i || ((i/100) != 0 && i/1000 == 0) || (i/100000) != 0) ans++;
}
cout<<ans<<endl;
}
