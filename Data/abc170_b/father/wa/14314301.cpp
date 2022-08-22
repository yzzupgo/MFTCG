#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int ans=4*a-b;
if(ans%2==0&&ans>=0&&ans<=b)
cout<<"YES";
else
cout<<"NO";
return 0;
}
