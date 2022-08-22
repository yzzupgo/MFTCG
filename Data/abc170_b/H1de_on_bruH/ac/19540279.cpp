#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <iomanip>
#include <set>
#define I int
#define LL long long
#define S string
#define B bool
#define C char
#define N 200001
using namespace std;
int main()
{
I n,l;
cin>>n>>l;
B yes=0;
for(I i=0;i<=n;i++)
{
if(i*2+abs(n-i)*4==l)
{
yes=1;
break;
}
}
if(yes)cout<<"Yes";
else cout<<"No";
return 0;
}
