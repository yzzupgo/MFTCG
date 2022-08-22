#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
#define ll long long int
#define nl endl
using namespace std;
int main()
{
ll a,b,r,r1;
cin >> a >> b;
if((a*4)>=b && (a*2<=b) && b%2==0)
{
cout << "Yes" << nl;
}
else
cout << "No" << nl;
}
