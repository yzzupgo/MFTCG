#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+100;
typedef long long LL;
int main()
{
int n;
cin>>n;
int res=0;
for(int i=1;i<=n;i++)
if(i>=0&&i<=9||i>=100&&i<=999||i>=10000&&i<=99999&&i>=100000&&i<=999999)
res++;
cout<<res<<endl;
}
