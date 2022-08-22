#include<bits/stdc++.h>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e5+5;
#define ll long long
#define inf 0x3f3f3f3f
#define mem(x) memset(x,0,sizeof(x))
#define sca(x) scanf("%d",&x)
#define scall(x) scanf("%lld",&x)
#define eps 1e-6
int main()
{
int x,y;sca(x);sca(y);
if((y-2*x)%2==0&&(y-2*x)/2<=x&&(y-2*x)>=0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
