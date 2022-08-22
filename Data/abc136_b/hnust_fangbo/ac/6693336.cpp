#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cctype>
#include<cmath>
#include<cstring>
#include<sstream>
#include<set>
#include<map>
#define maxn 100000007
using namespace std;
typedef long long ll;
int main()
{
int n;
cin>>n;
int s=0;
if(n<10)
s=n;
else if(n<100)
s=9;
else if(n<1000)
s=n-90;
else if(n<10000)
s=909;
else if(n<100000)
s=909+n-10000+1;
else
s=90909;
cout<<s;
return 0;
}
