#include<iostream>
#include<vector>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
vector<long int>::iterator it;
long long int n,t{0},l,i,d,k,x,sum{0},a,y,j,r,b,z,m{0},cnto{0},cnte{0};
string s,s1,s3;
long long int ans{0};
{
cin>>x>>y;
if(y%2!=0)cout<<"NO";
else
{
ans=y/2-x;
if(ans<=x && (x-ans)<=x)cout<<"YES";
}
t--;
}
return 0;
}
