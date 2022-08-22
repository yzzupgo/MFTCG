#include <algorithm>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <vector>
#include <numeric>
#include <math.h>
#define ld long double
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using p = pair<int, int>;
int main()
{
int x;
int y;
cin>>x>>y;
for (int i = 0; i <= x; ++i){
for (int j = 0; j <= x; ++j){
if(i+j==x)
if(2*i+4*j==y)
{
cout<<"Yes"<<endl;
return 0;}}}
cout<<"No"<<endl;
return 0;}
